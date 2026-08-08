#include "nfa.h"
#include <sstream>
#include <stack>
#include <cctype>
#include "utils.h"

/**
 * 为NFA新增一个状态
 * @return 返回该状态的编号
 */
int NFA::addState()
{
    int num = num_states;
    num_states++;
    is_final.push_back(false);
    std::vector<Rule> r;
    rules.push_back(r);
    return num;
}

/**
 * 为NFA新增一条转移规则
 * @param init 该条规则出发的状态
 * @param end 该条规则到达的状态
 * @param type 该条规则的类型
 * @param by 对特殊字符转移，这里只有一个字母，如d；对字符区间转移，这里是区间的开头，如a；对一般转移，这里就是转移所需的字母；对epsilon-转移，这里固定为空串。
 * @param to 对字符区间转移，这里是区间的结尾，如z；对任何其他类型的转移，这里固定为空串。
 * @param flags 来自正则表达式的修饰符
 */
void NFA::addRule(int init, int end, RuleType t, std::string by, std::string to)
{
    Rule r;
    r.dst = end;
    r.type = t;
    r.by = by;
    r.to = to;
    rules[init].push_back(r);
}

void NFA::addPDARule(int init, int end, PDAType type, int lowerBound, int upperBound)
{
    Rule r;
    r.dst = end;
    r.type = PDA;
    r.PDAtype = type;
    r.lowerBound = lowerBound;
    r.upperBound = upperBound;
    rules[init].push_back(r);
}

/**
 * 判断字符是否合法
 * @param rule 当前某条规则，
 * @param c 当前读入的字符
 * @param last 当前读入字符的上一个字符
 * @return 若字符合法返回true，否则返回false
 */
bool NFA::ruleMatches(const Rule &rule, char c, char last)
{
    switch (rule.type)
    {
    case NORMAL:
    {
        return rule.by[0] == c;
    }
    case RANGE:
    {
        return c >= rule.by[0] && c <= rule.to[0];
    }
    case SPECIAL:
    {
        switch (rule.by[0])
        {
        case 'd':
            return std::isdigit(c);
        case 'w':
            return std::isalnum(c) || c == '_';
        case 's':
            return std::isspace(c);
        case 'D':
            return !std::isdigit(c);
        case 'W':
            return !std::isalnum(c) && c != '_';
        case 'S':
            return !std::isspace(c);
        case '.':
            if (flags.find('s') != std::string::npos)
                return true;
            else
            {
                if (c == '\n' || c == '\r')
                    return false;
                else
                    return true;
            }
        default:
            return false;
        }
    }
    case EPSILON:
    {
        if (rule.by == "\\b")
        {
            if (c == 0 && (std::isalnum(last) || last == '_'))
            {
                return true;
            }
            else if (last == 0 && (std::isalnum(c) || c == '_'))
            {
                return true;
            }
            else if ((std::isalnum(c) || c == '_') && (!std::isalnum(last) && last != '_'))
            {
                return true;
            }
            else if ((std::isalnum(last) || last == '_') && (!std::isalnum(c) && c != '_'))
            {
                return true;
            }
            return false;
        }
        else if (rule.by == "\\B")
        {
            if (c == 0 && last == 0)
            {
                return true;
            }
            else if ((std::isalnum(c) || c == '_') && (std::isalnum(last) || last == '_'))
            {
                return true;
            }
            else if ((!std::isalnum(c) && c != '_') && (!std::isalnum(last) && last != '_'))
            {
                return true;
            }
            return false;
        }
        else
            return false;
    }
    case NAGETIVE:
    {
        std::vector<RuleType> typeList = rule.negativeRuleTypes;
        std::vector<std::string> byList = rule.negativeBys;
        std::vector<std::string> toList = rule.negativeTos;
        for (int i = 0; i < typeList.size(); i++)
        {
            switch (typeList[i])
            {
            case NORMAL:
            {
                if (byList[i][0] == c)
                    return false;
                else
                    continue;
            }
            case RANGE:
            {
                if (byList[i][0] <= c && toList[i][0] >= c)
                    return false;
                else
                    continue;
            }
            case SPECIAL:
            {
                switch (byList[i][0])
                {
                case 'd':
                    if (std::isdigit(c))
                        return false;
                    else
                        continue;
                case 'w':
                    if (std::isalnum(c) || c == '_')
                        return false;
                    else
                        continue;
                case 's':
                    if (std::isspace(c))
                        return false;
                    else
                        continue;
                case 'D':
                    if (!std::isdigit(c))
                        return false;
                    else
                        continue;
                case 'W':
                    if (!std::isalnum(c) && c != '_')
                        return false;
                    else
                        continue;
                case 'S':
                    if (!std::isspace(c))
                        return false;
                    else
                        continue;
                default:
                    continue;
                }
                continue;
            }
            }
        }
        return true;
    }
    default:
        return false;
    }
}
/**
 * 判断(状态，字符串)是否已经探索过
 * @param visited 记录已经访问过的状态和剩余输入字符串的组合
 * @param stateStrPair 当前状态和剩余输入字符串的组合
 * @return 若已访问过该组合，返回false，否则返回true
 */
bool NFA::isVisited(const std::vector<std::pair<int, std::string>> &visited, const std::pair<int, std::string> &stateStrPair)
{
    for (const auto &pair : visited)
    {
        if (pair.first == stateStrPair.first && pair.second == stateStrPair.second)
        {
            return true;
        }
    }
    return false;
}
/**
 * 回溯函数，生成NFA合法读入字符串的转移路径
 * @param path 记录从初始状态到当前状态的路径，每个元素是(状态编号, 剩余输入字符串)
 * @param finalStep 当前的步数，是整条路经的最后一步
 * @return 返回NFA合法读入字符串的转移路径Path类实例
 */
Path NFA::backtrace(const std::vector<std::pair<int, std::string>> &path, int finalStep)
{
    Path result;
    std::vector<int> states;
    std::vector<std::string> consumes;

    // 从最终步骤 finalStep 开始，逐步向前回溯。
    int currentStep = finalStep;
    while (currentStep > 0)
    {
        int currentState = path[currentStep].first;
        std::string currentInput = path[currentStep].second;
        std::string prevInput = path[currentStep - 1].second;

        // 更新 states 序列和 consume 序列，由于逆序回溯，插入在首位
        states.insert(states.begin(), currentState);
        if (prevInput.length() > currentInput.length())
            // 此步骤在路径中为读入单个字符
            consumes.insert(consumes.begin(), std::string(1, prevInput[0]));
        else
            // 此步骤在路径中为 EPSILON 转移
            consumes.insert(consumes.begin(), "");

        currentStep--;
    }

    // 添加初始状态
    states.insert(states.begin(), path[0].first);

    result.states = states;
    result.consumes = consumes;
    return result;
}

/**
 * 在自动机上执行指定的输入字符串。
 * @param text 输入字符串
 * @return 若拒绝，请 return Path::reject(); 。若接受，请手工构造一个Path的实例并返回。
 */
Path NFA::exec(std::string text, bool flag, char last)
{
    // DFS搜索栈，每个元素为(状态编号,剩余输入字符串,当前步骤编号,当前上一字符,当前栈)
    std::stack<std::tuple<int, std::string, int, char, std::stack<int>>> stack;
    // 记录从初始状态到当前状态的路径，每个元素是(状态编号, 剩余输入字符串)
    std::vector<std::pair<int, std::string>> path;
    // 记录已经访问过的状态和剩余输入字符串的组合，避免重复访问
    std::vector<std::pair<int, std::string>> visited;

    // 将初态压入DFS栈
    std::stack<int> emptyStack;
    stack.push(std::make_tuple(0, text, 0, last, emptyStack));
    visited.push_back(std::make_pair(0, text));

    // 进行DFS搜索直至栈为空或者提前返回可行Path
    while (!stack.empty())
    {
        // 弹出栈顶元素
        auto [q, str, step, lastOne, tempStack] = stack.top();
        stack.pop();

        // 讲当前步骤记录到path中
        if (step >= path.size())
        {
            path.resize(step + 1);
        }
        path[step] = std::make_pair(q, str);

        // 抵达终态立刻返回Path实例，不在乎串是否读完
        if (is_final[q])
        {
            return backtrace(path, step);
        }

        // 遍历当前状态q的所有规则
        for (auto it = rules[q].rbegin(); it != rules[q].rend(); ++it)
        {
            const Rule &rule = *it;
            int nextState = rule.dst;
            std::string nextStr;
            std::stack<int> newStack = tempStack;
            char newLastOne = lastOne;

            // 检查当前规则是否可用
            if (rule.type == EPSILON)
            {
                if (rule.by == "")
                {
                    // 如果是普通空转移
                    nextStr = str;
                    newLastOne = lastOne;
                }
                else if (rule.by == "$")
                {
                    // 当前为结尾, 或者带有m标志匹配一行结尾
                    if ((str == "") ||
                        flags.find('m') != std::string::npos && (str[0] == '\r' || str[0] == '\n'))
                    {
                        nextStr = str;
                    }
                    else
                        continue;
                }
                else if (rule.by == "^")
                {
                    // 当字符串为开头, 或者带有m标志匹配一行开头
                    if ((str == text && flag == 0) ||
                        flags.find('m') != std::string::npos && ((lastOne == '\r' || lastOne == '\n')))
                    {
                        nextStr = str;
                    }
                    else
                        continue;
                }
                else if (rule.by == "\\b" || rule.by == "\\B")
                {
                    if (str != "")
                    {
                        if (ruleMatches(rule, str[0], lastOne))
                        {
                            nextStr = str;
                            newLastOne = str[0];
                        }
                        else
                            continue;
                    }
                    else if (str == "")
                    {
                        if (ruleMatches(rule, 0, lastOne))
                        {
                            nextStr = str;
                            newLastOne = 0;
                        }
                        else
                            continue;
                    }
                    else
                        continue;
                }
                else
                    continue;
            }
            else if (rule.type == PDA)
            {
                switch (rule.PDAtype)
                {
                case PUSH:
                {
                    newStack.push(0);
                    nextStr = str;
                    break;
                }
                case ADD:
                {
                    if (!tempStack.empty())
                    {
                        int top = tempStack.top();
                        newStack.pop();
                        top++;
                        newStack.push(top);
                        nextStr = str;
                    }
                    else
                        continue;
                    break;
                }
                case NOCHANGE:
                {
                    if (!tempStack.empty())
                    {
                        if (tempStack.top() < rule.upperBound)
                            nextStr = str;
                        else
                            continue;
                    }
                    else
                        continue;
                    break;
                }
                case POP:
                {
                    if (!tempStack.empty())
                    {
                        if (tempStack.top() >= rule.lowerBound)
                        {
                            newStack.pop();
                            nextStr = str;
                        }
                        else
                            continue;
                    }
                    else
                        continue;
                    break;
                }
                }
            }
            else if (!str.empty() && rule.type != EPSILON && ruleMatches(rule, str[0])) // 找到匹配的字符转移规则
            {
                nextStr = str.substr(1);
            }
            else // 非匹配的转移规则，跳过不记录且不压入栈
            {
                continue;
            }

            // 检查当前组合是否访问过，若未访问过进行记录并压入栈
            if (!isVisited(visited, std::make_pair(nextState, nextStr)))
            {
                stack.push(std::make_tuple(nextState, nextStr, step + 1, newLastOne, newStack));
                visited.push_back(std::make_pair(nextState, nextStr));
            }
        }
    }

    // DFS搜索后依然未找到路径，则不存在合法路径
    return Path::reject();
}

/**
 * 将Path转为（序列化为）文本的表达格式（以便于通过stdout输出）
 * 你不需要理解此函数的含义、阅读此函数的实现和调用此函数。
 */
std::ostream &operator<<(std::ostream &os, Path &path)
{
    if (!path.states.empty())
    {
        if (path.consumes.size() != path.states.size() - 1)
        {
            os << "Path对象无效：consumes.size()不等于states.size()-1！";
            return os;
        }
        for (int i = 0; i < path.consumes.size(); ++i)
        {
            os << path.states[i] << " " << path.consumes[i] << " ";
        }
        os << path.states[path.states.size() - 1];
    }
    else
        os << std::string("Reject");
    return os;
}

/**
 * 从自动机的文本表示构造自动机
 * 你不需要理解此函数的含义、阅读此函数的实现和调用此函数。
 */
NFA NFA::from_text(const std::string &text)
{
    NFA nfa = NFA();
    bool reading_rules = false;
    std::istringstream ss(text);
    std::string line, type;
    while (std::getline(ss, line))
    {
        if (line.empty())
            continue;
        if (line.find("type:") == 0)
        {
            type = strip(line.substr(5));
            continue;
        }
        if (type != "nfa")
            throw std::runtime_error("输入文件的类型不是nfa！");
        if (line.find("states:") == 0)
        {
            nfa.num_states = std::stoi(line.substr(7));
            for (int i = 0; i < nfa.num_states; ++i)
            {
                nfa.rules.emplace_back();
                nfa.is_final.push_back(false);
            }
            continue;
        }
        else if (line.find("final:") == 0)
        {
            if (nfa.num_states == 0)
                throw std::runtime_error("states必须出现在final和rules之前!");
            std::istringstream ss2(line.substr(6));
            int t;
            while (true)
            {
                ss2 >> t;
                if (!ss2.fail())
                    nfa.is_final[t] = true;
                else
                    break;
            }
            reading_rules = false;
            if (ss2.eof())
                continue;
        }
        else if (line.find("rules:") == 0)
        {
            if (nfa.num_states == 0)
                throw std::runtime_error("states必须出现在final和rules之前!");
            reading_rules = true;
            continue;
        }
        else if (line.find("input:") == 0)
        {
            reading_rules = false;
            continue;
        }
        else if (reading_rules)
        {
            auto arrow_pos = line.find("->"), space_pos = line.find(' ');
            if (arrow_pos != std::string::npos && space_pos != std::string::npos && arrow_pos < space_pos)
            {
                int src = std::stoi(line.substr(0, arrow_pos));
                int dst = std::stoi(line.substr(arrow_pos + 2, space_pos - (arrow_pos + 2)));
                auto content = line.substr(space_pos + 1);
                bool success = true;
                while (success && !content.empty())
                {
                    auto p = content.find(' ');
                    if (p == std::string::npos)
                        p = content.size();
                    else if (p == 0)
                        p = 1; // 当第一个字母是空格时，说明转移的字符就是空格。于是假定第二个字母也是空格（如果不是，会在后面直接报错）
                    Rule rule{dst};
                    if (p == 3 && content[1] == '-')
                    {
                        rule.type = RANGE;
                        rule.by = content[0];
                        rule.to = content[2];
                    }
                    else if (p == 2 && content[0] == '\\')
                    {
                        if (content[1] == 'e')
                            rule.type = EPSILON;
                        else
                        {
                            rule.type = SPECIAL;
                            rule.by = content[1];
                        }
                    }
                    else if (p == 1 && (p >= content.length() || content[p] == ' '))
                    {
                        rule.type = NORMAL;
                        rule.by = content[0];
                    }
                    else
                        success = false;
                    nfa.rules[src].push_back(rule);
                    content = content.substr(std::min(p + 1, content.size()));
                }
                if (success)
                    continue;
            }
        }
    }
    if (!ss.eof())
        throw std::runtime_error("无法parse输入文件！(stringstream在getline的过程中发生错误)");
    return nfa;
}
