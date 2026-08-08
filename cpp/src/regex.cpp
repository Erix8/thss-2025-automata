#include "regex.h"
#include "utils.h"

/**
 * 处理语法分析树的Char节点
 * @param node 语法分析树Single节点下的Char节点
 * @return 根据Char匹配规则构造好的子NFA的入口和出口
 */
StateGroup Regex::processChar(regexParser::CharContext *node)
{
    StateGroup result = {nfa.addState(), nfa.addState()};
    if (node->EscapedChar())
    {
        std::string str = node->getText();
        if (str[1] == 'x')
        {
            // 16进制字符转化为数值类型
            long value = strtol(str.c_str() + 2, nullptr, 16);
            std::string s(1, static_cast<char>(value));
            nfa.addRule(result.init, result.end, NORMAL, s);
        }
        else if (str[1] == 'f' || str[1] == 'n' || str[1] == 'r' || str[1] == 't' || str[1] == 'v')
        {
            // 对应的ascii字符
            switch (str[1])
            {
            case 'f':
                nfa.addRule(result.init, result.end, NORMAL, "\f");
                break;
            case 'n':
                nfa.addRule(result.init, result.end, NORMAL, "\n");
                break;
            case 'r':
                nfa.addRule(result.init, result.end, NORMAL, "\r");
                break;
            case 't':
                nfa.addRule(result.init, result.end, NORMAL, "\t");
                break;
            case 'v':
                nfa.addRule(result.init, result.end, NORMAL, "\v");
                break;
            }
        }
        else
        {
            // 直接取str[1]
            std::string s(1, str[1]);
            nfa.addRule(result.init, result.end, NORMAL, s);
        }
    }
    else
    {
        // 若不是转义字符，直接读取text作为转移规则
        nfa.addRule(result.init, result.end, NORMAL, node->getText());
        // std::cout << "NotEscapedChar: " << result.init << ' ' << result.end << std::endl;
    }
    return result;
}
/**
 * 处理语法分析树的CharacterGroup节点
 * @param node 语法分析树Single节点下的CharacterGroup节点
 * @return 根据CharacterGroup匹配规则构造好的子NFA的入口和出口
 */
StateGroup Regex::processCharacterGroup(regexParser::CharacterGroupContext *node)
{
    StateGroup result = {nfa.addState(), nfa.addState()};
    if (node->characterGroupNegativeModifier())
    {
        // 如果该节点存在取反标识符
        Rule tempRule;
        tempRule.dst = result.end;
        tempRule.type = NAGETIVE;
        std::vector<regexParser::CharacterGroupItemContext *>
            characterGroupItemList = node->characterGroupItem();
        for (int i = 0; i < characterGroupItemList.size(); i++)
        {
            if (characterGroupItemList[i]->charInGroup())
            {
                // 此时为NORMAL类型转移，不需要To
                tempRule.negativeRuleTypes.push_back(NORMAL);
                tempRule.negativeTos.push_back("");
                std::string str = characterGroupItemList[i]->getText();
                // std::cout << str << std::endl; // 测试使用
                if (characterGroupItemList[i]->charInGroup()->EscapedChar())
                {
                    // std::cout << str << std::endl; // 测试使用
                    // 若为转义字符
                    if (str[1] == 'x')
                    {
                        // 16进制字符转化为数值类型
                        long value = strtol(str.c_str() + 2, nullptr, 16);
                        std::string s(1, static_cast<char>(value));
                        tempRule.negativeBys.push_back(s);
                    }
                    else if (str[1] == 'f' || str[1] == 'n' || str[1] == 'r' || str[1] == 't' || str[1] == 'v')
                    {
                        switch (str[1])
                        {
                        case 'f':
                            tempRule.negativeBys.push_back("\f");
                            break;
                        case 'n':
                            tempRule.negativeBys.push_back("\n");
                            break;
                        case 'r':
                            tempRule.negativeBys.push_back("\r");
                            break;
                        case 't':
                            tempRule.negativeBys.push_back("\t");
                            break;
                        case 'v':
                            tempRule.negativeBys.push_back("\v");
                            break;
                        }
                    }
                    else
                    {
                        // 直接取str[1]
                        std::string s(1, str[1]);
                        tempRule.negativeBys.push_back(s);
                    }
                }
                else
                {
                    // std::cout << str << std::endl; // 测试使用
                    // 若为一般字符
                    tempRule.negativeBys.push_back(str);
                }
            }
            else if (characterGroupItemList[i]->characterClass())
            {
                std::string str = characterGroupItemList[i]->getText();
                // std::cout << str << std::endl; // 测试使用
                tempRule.negativeRuleTypes.push_back(SPECIAL);
                tempRule.negativeBys.push_back(std::string(1, str[1]));
                tempRule.negativeTos.push_back("");
            }
            else if (characterGroupItemList[i]->characterRange())
            {
                std::string s1 = characterGroupItemList[i]->characterRange()->charInGroup(0)->getText();
                std::string s2 = characterGroupItemList[i]->characterRange()->charInGroup(1)->getText();
                // std::cout << s1 << ' ' << s2 << std::endl; // 测试使用
                tempRule.negativeRuleTypes.push_back(RANGE);
                tempRule.negativeBys.push_back(s1);
                tempRule.negativeTos.push_back(s2);
            }
        }
        nfa.rules[result.init].push_back(tempRule);
    }
    else
    {
        std::vector<regexParser::CharacterGroupItemContext *>
            characterGroupItemList = node->characterGroupItem();
        for (int i = 0; i < characterGroupItemList.size(); i++)
        {
            if (characterGroupItemList[i]->charInGroup())
            {
                if (characterGroupItemList[i]->charInGroup()->EscapedChar())
                {
                    std::string str = characterGroupItemList[i]->getText();
                    if (str[1] == 'x')
                    {
                        // 16进制字符转化为数值类型
                        long value = strtol(str.c_str() + 2, nullptr, 16);
                        std::string s(1, static_cast<char>(value));
                        nfa.addRule(result.init, result.end, NORMAL, s);
                    }
                    else if (str[1] == 'f' || str[1] == 'n' || str[1] == 'r' || str[1] == 't' || str[1] == 'v')
                    {
                        // 对应的ascii字符
                        switch (str[1])
                        {
                        case 'f':
                            nfa.addRule(result.init, result.end, NORMAL, "\f");
                            break;
                        case 'n':
                            nfa.addRule(result.init, result.end, NORMAL, "\n");
                            break;
                        case 'r':
                            nfa.addRule(result.init, result.end, NORMAL, "\r");
                            break;
                        case 't':
                            nfa.addRule(result.init, result.end, NORMAL, "\t");
                            break;
                        case 'v':
                            nfa.addRule(result.init, result.end, NORMAL, "\v");
                            break;
                        }
                    }
                    else
                    {
                        // 直接取str[1]
                        std::string s(1, str[1]);
                        nfa.addRule(result.init, result.end, NORMAL, s);
                    }
                }
                else
                {
                    // 若不是转义字符，直接读取text作为转移规则
                    nfa.addRule(result.init, result.end, NORMAL, characterGroupItemList[i]->getText());
                }
            }
            else if (characterGroupItemList[i]->characterRange())
            {
                std::string s1 = characterGroupItemList[i]->characterRange()->charInGroup(0)->getText();
                std::string s2 = characterGroupItemList[i]->characterRange()->charInGroup(1)->getText();
                nfa.addRule(result.init, result.end, RANGE, s1, s2);
            }
            else if (characterGroupItemList[i]->characterClass())
            {
                // 此时储存的字符串形如"\w"，只需取str[1]传入规则
                std::string str = characterGroupItemList[i]->getText();
                nfa.addRule(result.init, result.end, SPECIAL, std::string(1, str[1]));
            }
        }
    }
    return result;
}
/**
 * 处理语法分析树的Single节点
 * @param node 语法分析树NormalItem节点下的Single节点
 * @return 根据NormalItem匹配规则构造好的子NFA的入口和出口
 */
StateGroup Regex::processSingle(regexParser::SingleContext *node)
{
    StateGroup result;
    // std::cout << node->getText() << std::endl; // 测试使用
    if (node->char_())
    {
        // 此时子自动机匹配单个字符（普通字符或转义字符）
        result = processChar(node->char_());
        // std::cout << "Char: " << result.init << ' ' << result.end << std::endl;
    }
    else if (node->characterClass())
    {
        // 此时子自动机匹配任意元字符
        result = {nfa.addState(), nfa.addState()};
        // 此时储存的字符串形如"\w"，只需取str[1]传入规则
        std::string str = node->getText();
        nfa.addRule(result.init, result.end, SPECIAL, std::string(1, str[1]));
        // std::cout << "CharacterClass: " << result.init << ' ' << result.end << std::endl;
    }
    else if (node->characterGroup())
    {
        // 此时子自动机匹配或不匹配中括号字符组
        result = processCharacterGroup(node->characterGroup());
        // std::cout << node->getText() << std::endl;
        // std::cout << "CharacterGroup: " << result.init << ' ' << result.end << std::endl;
    }
    else if (node->AnyCharacter())
    {
        // 此时子自动机匹配任意字符（若无s修饰符，不匹配\r和\n）
        result = {nfa.addState(), nfa.addState()};
        nfa.addRule(result.init, result.end, SPECIAL, ".", "");
        // std::cout << "AnyCharacter: " << result.init << ' ' << result.end << std::endl;
    }
    return result;
}
/**
 * 处理语法分析树的NormalItem节点
 * @param node 语法分析树ExpressionItem节点下的NormalItem节点
 * @return 根据NormalItem匹配规则构造好的子NFA的入口和出口
 */
StateGroup Regex::processNormalItem(regexParser::NormalItemContext *node)
{
    StateGroup result;
    if (node->single())
    {
        regexParser::SingleContext *single = node->single();
        result = processSingle(single);
    }
    else if (node->group())
    {
        result = {nfa.addState(), nfa.addState()};
        if (!node->group()->groupNonCapturingModifier())
        {
            // 新增：如果是捕获分组, result 的两个状态打上捕获分组标记
            is_Group_Init.push_back(result.init);
            is_Group_End.push_back(result.end);
        }
        regexParser::RegexContext *regex = node->group()->regex();
        StateGroup tmp = processRegex(regex);
        nfa.addRule(result.init, tmp.init, EPSILON);
        nfa.addRule(tmp.end, result.end, EPSILON);
    }
    return result;
}

StateGroup Regex::processAnchor(regexParser::AnchorContext *node)
{
    StateGroup result;
    result.init = nfa.addState();
    result.end = nfa.addState();
    nfa.addRule(result.init, result.end, EPSILON, node->getText());
    return result;
}

/**
 * 处理语法分析树的ExpressionItem节点
 * @param node 语法分析树Expression节点下的ExpressionItem节点
 * @return 构造好的子NFA
 */
StateGroup Regex::processExpressionItem(regexParser::ExpressionItemContext *node)
{
    StateGroup result;
    if (node->normalItem())
    {
        regexParser::NormalItemContext *normalItem = node->normalItem();
        // 获得根据NormalItem构造的子自动机
        result = processNormalItem(normalItem);
        if (node->quantifier())
        {
            // 根据quantifier的类型改造子自动机
            regexParser::QuantifierTypeContext *quantifierType = node->quantifier()->quantifierType();
            // 若为ZeroOrOneQ或ZeroOrMoreQ,则需要添加从result初态到终态的转移规则
            if (quantifierType->ZeroOrOneQuantifier() || quantifierType->ZeroOrMoreQuantifier())
            {
                if (node->quantifier()->lazyModifier())
                {
                    // 若为非贪婪情况,优先跳过自动机直达终态,该规则优先级高
                    nfa.rules[result.init].insert(nfa.rules[result.init].begin(),
                                                  {result.end, EPSILON, "", ""});
                }
                else
                {
                    // 若为贪婪情况,优先进入自动机内部,将新增规则优先级滞后
                    nfa.addRule(result.init, result.end, EPSILON);
                }
            }
            // 若为OneOrMoreQ或ZeroOrMoreQ,则需要增加从result终态到初态的转移规则
            if (quantifierType->OneOrMoreQuantifier() || quantifierType->ZeroOrMoreQuantifier())
            {
                nfa.addRule(result.end, result.init, EPSILON);
                if (node->quantifier()->lazyModifier())
                {
                    // 若为贪婪情况，则不需要修改，连接时自动会在向后探索之前回溯到初态
                    // 若为非贪婪情况，需要增加新状态，优先向后转移而不是回溯到初态
                    int f = nfa.addState();
                    nfa.rules[result.end].insert(nfa.rules[result.end].begin(),
                                                 {f, EPSILON, "", ""});
                    result.end = f;
                }
            }

            if (quantifierType->rangeQuantifier())
            {
                // 增加四个新状态
                StateGroup r, temp;
                r.init = nfa.addState();
                r.end = nfa.addState();
                temp.init = nfa.addState();
                temp.end = nfa.addState();

                nfa.addPDARule(r.init, temp.init, PUSH);
                nfa.addPDARule(temp.init, result.init, ADD);
                nfa.addRule(result.end, temp.end, EPSILON);

                if (node->quantifier()->lazyModifier())
                {
                    // 若有非贪婪匹配符，优先跳过区间匹配内容
                    Rule rule;
                    rule.dst = temp.end;
                    rule.type = EPSILON;
                    nfa.rules[temp.init].insert(nfa.rules[temp.init].begin(), rule);
                }
                else
                {
                    nfa.addRule(temp.init, temp.end, EPSILON);
                }

                // 获得区间下限
                regexParser::RangeQuantifierContext *rangeQuantifier = quantifierType->rangeQuantifier();
                int lowerBound = stoi(rangeQuantifier->rangeQuantifierLowerBound()->getText());

                if (rangeQuantifier->rangeQuantifierUpperBound())
                {
                    // 同时具有上下限
                    int upperBound = stoi(rangeQuantifier->rangeQuantifierUpperBound()->getText());
                    nfa.addPDARule(temp.end, temp.init, NOCHANGE, INT_MIN, upperBound);
                    if (node->quantifier()->lazyModifier())
                    {
                        Rule rule;
                        rule.dst = r.end;
                        rule.type = PDA;
                        rule.PDAtype = POP;
                        rule.lowerBound = lowerBound;
                        nfa.rules[temp.end].insert(nfa.rules[temp.end].begin(), rule);
                    }
                    else
                    {
                        nfa.addPDARule(temp.end, r.end, POP, lowerBound);
                    }
                }
                else if (rangeQuantifier->rangeDelimiter())
                {
                    // 仅具有下限无上限
                    nfa.addPDARule(temp.end, temp.init, NOCHANGE);
                    if (node->quantifier()->lazyModifier())
                    {
                        Rule rule;
                        rule.dst = r.end;
                        rule.type = PDA;
                        rule.PDAtype = POP;
                        rule.lowerBound = lowerBound;
                        nfa.rules[temp.end].insert(nfa.rules[temp.end].begin(), rule);
                    }
                    else
                    {
                        nfa.addPDARule(temp.end, r.end, POP, lowerBound);
                    }
                }
                else
                {
                    // 匹配必须为下限次
                    nfa.addPDARule(temp.end, temp.init, NOCHANGE, INT_MIN, lowerBound);
                    if (node->quantifier()->lazyModifier())
                    {
                        Rule rule;
                        rule.dst = r.end;
                        rule.type = PDA;
                        rule.PDAtype = POP;
                        rule.lowerBound = lowerBound;
                        nfa.rules[temp.end].insert(nfa.rules[temp.end].begin(), rule);
                    }
                    else
                    {
                        nfa.addPDARule(temp.end, r.end, POP, lowerBound);
                    }
                }
                result.init = r.init;
                result.end = r.end;
            }
        }
    }
    else if (node->anchor())
    {
        result = processAnchor(node->anchor());
    }
    return result;
}
/**
 * 处理语法分析树的Expression节点
 * @param node 语法分析树Regex节点下的Expression节点
 * @return 构造好的子NFA的入口和出口
 */
StateGroup Regex::processExpression(regexParser::ExpressionContext *node)
{
    // 将每个expressionItem子树的自动机依次“连接”起来
    // 每次result的尾指针指向新生成的子NFA的出口
    std::vector<regexParser::ExpressionItemContext *> expressionItemList = node->expressionItem();
    StateGroup result = processExpressionItem(expressionItemList[0]);
    int lastEnd = result.end;
    for (int i = 1; i < expressionItemList.size(); i++)
    {
        StateGroup curr = processExpressionItem(expressionItemList[i]);
        nfa.addRule(lastEnd, curr.init, EPSILON);
        lastEnd = curr.end;
    }
    result.end = lastEnd;
    return result;
}
/**
 * 处理语法分析树的Regex节点
 * @param tree parse()后得到的语法分析树根节点即Regex节点
 * @return 构造好的NFA的入口和出口
 */
StateGroup Regex::processRegex(regexParser::RegexContext *node)
{
    StateGroup result = {nfa.addState(), nfa.addState()};
    std::vector<regexParser::ExpressionContext *> experssionList = node->expression();
    for (int i = 0; i < experssionList.size(); ++i)
    {
        // 将每个expression子树的自动机“或”起来
        StateGroup curr = processExpression(experssionList[i]);
        nfa.addRule(result.init, curr.init, EPSILON);
        nfa.addRule(curr.end, result.end, EPSILON);
    }
    return result;
}

/**
 * 编译给定的正则表达式。
 * 具体包括两个过程：解析正则表达式得到语法分析树（这步已经为你写好，即parse方法），
 * 和在语法分析树上进行分析（遍历），构造出NFA（需要你完成的部分）。
 * 在语法分析树上进行分析的方法，可以是直接自行访问该树，也可以是使用antlr的Visitor机制，详见作业文档。
 * 你编译产生的结果，NFA应保存在当前对象的nfa成员变量中，其他内容也建议保存在当前对象下（你可以自由地在本类中声明新的成员）。
 * @param pattern 正则表达式的字符串
 * @param flags 正则表达式的修饰符
 */
void Regex::compile(const std::string &pattern, const std::string &flags)
{
    // TODO 第三次实验中，请你将在上次实验的内容粘贴过来，在其基础上进行修改。
    //
    regexParser::RegexContext *tree = Regex::parse(pattern); // 这是语法分析树
    this->flags = flags;
    nfa.flags = flags;
    int start = nfa.addState(); // 增加NFA初态
    int end = nfa.addState();   // 增加NFA终态

    // 整个正则表达式为第0分组
    is_Group_Init.push_back(start);
    is_Group_End.push_back(end);

    StateGroup cur = processRegex(tree);
    nfa.addRule(start, cur.init, EPSILON); // 增加NFA初态到子自动机入口的转移
    nfa.addRule(cur.end, end, EPSILON);    // 增加子自动机出口到NFA终态的转移
    nfa.is_final[end] = true;
}

/**
 * 在给定的输入文本上，进行正则表达式匹配，返回匹配到的第一个结果。
 * 匹配不成功时，返回空vector( return std::vector<std::string>(); ，或使用返回初始化列表的语法 return {}; )；
 * 第三次实验中，匹配成功时，返回由字符串组成的数组，其中下标为0的元素是匹配到的字符串，
   下标为i(i>=1)的元素是匹配结果中的第i个分组。例：["abcd", "a", "c"]
 * @param text 输入的文本
 * @return 如上所述
 */
std::vector<std::string> Regex::match(std::string text, bool allFlag, char lastChar)
{
    // exportJFLAP(nfa);
    std::vector<std::string> result;
    char last = lastChar;
    for (size_t start = 0; start < text.length(); ++start)
    {
        bool flag = 1;
        if (start == 0 && allFlag == 0)
        {
            flag = 0;
        }
        if (start > 0)
        {
            last = text[start - 1];
        }

        // 尝试从 start 位置开始寻找可匹配的文本
        Path path = nfa.exec(text.substr(start), flag, last);

        // 如果返回路径存在，则从 cosume 中读出匹配结果
        if (!path.consumes.empty())
        {
            // 读出每一分组的匹配结果
            for (int i = 0; i < is_Group_Init.size(); i++)
            {
                std::string match = "";
                bool inGroup = 0; // 表示当前循环是否进入第i号分组
                for (int j = 0; j < path.states.size(); j++)
                {
                    if (path.states[j] == is_Group_Init[i])
                    {
                        inGroup = 1;   // 进入分组
                        match.clear(); // 每次进入分组 match 为空
                    }
                    if (path.states[j] == is_Group_End[i])
                    {
                        inGroup = 0;
                    }
                    if (inGroup)
                    {
                        // 在分组中时读入 consume 的字符
                        match += path.consumes[j];
                    }
                }
                // 新增
                if (i == 0)
                {
                    mark += start + match.length();
                }
                result.push_back(match);
            }
            return result;
        }
    }
    return {};
}

/**
 * 第三次实验新增
 * 在给定的输入文本上，进行正则表达式匹配，返回匹配到的**所有**结果。
 * 匹配不成功时，返回空vector( return std::vector<std::string>(); ，或使用返回初始化列表的语法 return {}; )；
 * 匹配成功时，返回一个std::vector<std::vector<std::string>>，其中每个元素是每一个带分组的匹配结果，其格式同match函数的返回值（详见上面）。
 * @param text 输入的文本
 * @return 如上所述
 */
std::vector<std::vector<std::string>> Regex::matchAll(std::string text)
{
    std::vector<std::vector<std::string>> matches;
    char lastChar = 0;

    while (mark < text.length())
    {
        bool allFlag = 1;
        if (mark == 0)
        {
            allFlag = 0;
        }

        // 传入currentPos之后的内容
        std::vector<std::string> matchResult = match(text.substr(mark), allFlag, lastChar);

        // 当不再有可匹配字符串时，match返回为空
        if (matchResult.empty())
            break;

        matches.push_back(matchResult);
        marks.push_back(mark);

        if (mark > 0)
        {
            lastChar = text[mark - 1];
        }
    }

    return matches;
}

/**
 * 第三次实验新增
 * 在给定的输入文本上，进行基于正则表达式的替换，返回替换完成的结果。
 *
 * 例：对带分组的匹配结果["ab100cd","100"]，当replacement取值为
   [RepItem(groupId=-1,content="xyz"),RepItem(groupId=1),RepItem(groupId=-1,content="rst")]时，
   则应把匹配到的"ab100cd"替换为"xyz100rst"。
 * @param text 输入的文本
 * @param replacement 其中所有RepItem元素依次连接，即得到要把匹配内容最终替换为的结果。（RepItem的含义详见该结构体上的注释。）
 * @return 替换后的文本
 */
std::string Regex::replaceAll(std::string text, std::vector<RepItem> replacement)
{
    std::vector<std::vector<std::string>> matches = matchAll(text);
    int insertionPoint = 0;
    int lengthDelta = 0; // 跟踪替换引起的文本长度变化
    for (size_t i = 0; i < matches.size(); ++i)
    {
        int start = marks[i] - matches[i][0].length() + lengthDelta;
        std::string replacementText;

        for (const auto &rep : replacement)
        {
            if (rep.groupId == -1)
            {
                replacementText += rep.content;
            }
            else
            {
                replacementText += matches[i][rep.groupId];
            }
        }
        text.replace(start, matches[i][0].length(), replacementText);
        lengthDelta += replacementText.length() - matches[i][0].length();
    }
    return text;
}

/**
 * 解析正则表达式的字符串，生成语法分析树。
 * 你应该在compile函数中调用一次本函数，以得到语法分析树。
 * 通常，你不需要改动此函数，也不需要理解此函数实现每一行的具体含义。
 * 但是，你应当对语法分析树的数据结构(RegexContext)有一定的理解，作业文档中有相关的教程可供参考。
 * @param pattern 要解析的正则表达式的字符串
 * @return RegexContext类的对象的指针。保证不为空指针。
 */
regexParser::RegexContext *Regex::parse(const std::string &pattern)
{
    if (antlrInputStream)
        throw std::runtime_error("此Regex对象已被调用过一次parse函数，不可以再次调用！");
    antlrInputStream = new antlr4::ANTLRInputStream(pattern);
    antlrLexer = new regexLexer(antlrInputStream);
    antlrTokenStream = new antlr4::CommonTokenStream(antlrLexer);
    antlrParser = new regexParser(antlrTokenStream);
    regexParser::RegexContext *tree = antlrParser->regex();
    if (!tree)
        throw std::runtime_error("parser解析失败(函数返回了nullptr)");
    auto errCount = antlrParser->getNumberOfSyntaxErrors();
    if (errCount > 0)
        throw std::runtime_error("parser解析失败，表达式中有" + std::to_string(errCount) + "个语法错误！");
    if (antlrTokenStream->LA(1) != antlr4::Token::EOF)
        throw std::runtime_error("parser解析失败，解析过程未能到达字符串结尾，可能是由于表达式中间有无法解析的内容！已解析的部分：" + antlrTokenStream->getText(antlrTokenStream->get(0),
                                                                                                                                                                antlrTokenStream->get(antlrTokenStream->index() - 1)));
    return tree;
}

// 此析构函数是为了管理ANTLR语法分析树所使用的内存的。你不需要阅读和理解它。
Regex::~Regex()
{
    delete antlrInputStream;
    delete antlrLexer;
    delete antlrTokenStream;
    delete antlrParser;
}

/**
 * 第三次实验新增
 * 由字符串构造出replacement(RepItem的列表)。
 * 你不需要理解此函数的含义、阅读此函数的实现和调用此函数。
 */
std::vector<RepItem> RepItem::from_text(const std::string &text)
{
    std::string str = text;
    std::vector<RepItem> result;
    std::string content_buf;
    std::string::iterator it;
    while (!str.empty())
    {
        auto p = str.find('$');
        auto q = p + 1;
        if (p == std::string::npos)
        {
            content_buf += str;
            break;
        }
        content_buf += str.substr(0, p);
        if (isdigit(str[p + 1]))
        { // 形如$123
            // 若能到达此处，必有p+1<str.size()（否则str[p + 1]=='\0'，上面的条件判断会失败）
            for (q = p + 2; isdigit(str[q]); ++q)
                ;
            int group_id = atoi(str.substr(p + 1, q).c_str()); // NOLINT(*-err34-c)
            if (!content_buf.empty())
            {
                RepItem r{-1, content_buf};
                result.push_back(r);
                content_buf.clear();
            }
            RepItem r{group_id, ""};
            result.push_back(r);
        }
        else
        { // $$或形如$a，此时$不表示分组
            content_buf += '$';
            if (str[p + 1] == '$')
                q = p + 2;
        }
        str = str.substr(q);
    }
    if (!content_buf.empty())
    {
        RepItem r{-1, content_buf};
        result.push_back(r);
    }
    return result;
}
