#ifndef CPP_NFA_H
#define CPP_NFA_H

#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <limits.h>

/**
 * 本文件（包括对应的cpp文件）中已经定义好了一些类和函数，类内也已经定义好了一些成员变量和方法。不建议大家修改这些已经定义好的东西。
 * 但是，为了实现功能，你可以自由地增加新的函数、类等，包括可以在已经定义好的类自由地添加新的成员变量和方法。
 */
/**
 * 在第一次实验中，保证状态转移规则的字母和输入的字符串都仅包含ASCII字符，且不包含'\0'和换行符'\r' '\n'。
 * 第一次实验要求支持的特殊字符有：\d \w \s \D \W \S \.
 * 前六个的定义同一般正则表达式中的定义，最后一个\.则等同于一般正则表达式中的.，可匹配任何字符。
 * 各个字符的具体定义可查看 https://www.runoob.com/regexp/regexp-metachar.html
 */

/**
 * 用于表示状态转移的类型，和所有可能值的枚举
 */
enum RuleType
{
    NORMAL = 0,   // 一般转移。如 a
    RANGE = 1,    // 字符区间转移。如 a-z
    SPECIAL = 2,  // 特殊转移。如 \d （注意Rule的by属性里面是没有斜杠的，只有一个字母如d）
    EPSILON = 3,  // epsilon-转移。
    NAGETIVE = 4, // 取反转移，其规定的字符不能读取
    PDA = 5
};

enum PDAType
{
    PUSH = 0,
    ADD = 2,
    POP = 3,
    NOCHANGE = 4
};

/**
 * 表示一条状态转移规则。
 */
struct Rule
{
    int dst; // 目的状态

    // 一般规则
    RuleType type;     // 状态转移的类型，取值见上方的宏定义
    std::string by;    // 对特殊字符转移，这里只有一个字母，如d；对字符区间转移，这里是区间的开头，如a；对一般转移，这里就是转移所需的字母；对epsilon-转移，这里固定为空串。
    std::string to;    // 对字符区间转移，这里是区间的结尾，如z；对任何其他类型的转移，这里固定为空串。
    std::string flags; // 当前规则是否有修饰符flag

    // NEGATIVE 规则
    std::vector<RuleType> negativeRuleTypes; // 取反规则每条规则的类型
    std::vector<std::string> negativeBys;    // 取反规则每条规则的by
    std::vector<std::string> negativeTos;    // 取反规则每条规则的to

    // PDA 规则
    PDAType PDAtype;
    int lowerBound;
    int upperBound;
};

/**
 * 表示一条从初态到终态的路径。（也可以用来表示不存在路径的拒绝结果。）
 * 当输入字符串的执行结果是接受时，你需要根据接受的路径，正确实例化一个该结构体并返回。
 * 当输入字符串的执行结果是拒绝时，你应该返回Path::reject()。
 */
struct Path
{
    std::vector<int> states;           // 从初态到终态经历的状态列表。开头必须是0。
    std::vector<std::string> consumes; // 长度必须为states的长度-1。consumes[i]表示states[i]迁移到states[i+1]时所消耗的字母（若是ε转移，则应设为空串""）

    static Path reject() { return Path{}; }
};

/**
 * 将Path转为（序列化为）文本的表达格式（以便于通过stdout输出）
 * 你不需要理解此函数的含义、阅读此函数的实现和调用此函数。
 */
std::ostream &operator<<(std::ostream &os, Path &path);

struct StateGroup
{
    int init = -1;
    int end = -1;
};

/**
 * 表示一个NFA的类。
 * 本类定义的自动机，约定状态用编号0~(num_states-1)表示，初态固定为0。
 */
class NFA
{
public:
    int num_states = 0;                   // 状态个数
    std::stack<int> PDA_Stack;            // 用于区间限定符的栈
    std::vector<bool> is_final;           // 用于判断状态是否为终态的数组，长为num_states。is_final[i]为true表示状态i为终态。
    std::vector<std::vector<Rule>> rules; // 表示所有状态转移规则的二维数组，长为num_states。rules[i]表示从状态i出发的所有转移规则。
    std::string flags;

    /**
     * 为NFA新增一个状态
     * @return 返回该状态的编号
     */
    int addState();

    /**
     * 为NFA新增一条转移规则
     * @param init 该条规则出发的状态
     * @param end 该条规则到达的状态
     * @param type 该条规则的类型
     * @param by 对特殊字符转移，这里只有一个字母，如d；对字符区间转移，这里是区间的开头，如a；对一般转移，这里就是转移所需的字母；对epsilon-转移，这里固定为空串。
     * @param to 对字符区间转移，这里是区间的结尾，如z；对任何其他类型的转移，这里固定为空串。
     */
    void addRule(int init, int end, RuleType type, std::string by = "", std::string to = "");

    void addPDARule(int init, int end, PDAType type, int lowerBound = INT_MIN, int upperBound = INT_MAX);

    /**
     * 判断字符是否合法
     * @param rule 当前某条规则
     * @param c 当前读入的字符
     * @return 若字符合法返回true，否则返回false
     */
    bool ruleMatches(const Rule &rule, char c, char last = 0);

    /**
     * 判断(状态，字符串)是否已经探索过
     * @param visited 记录已经访问过的状态和剩余输入字符串的组合
     * @param stateStrPair 当前状态和剩余输入字符串的组合
     * @return 若已访问过该组合，返回false，否则返回true
     */
    bool isVisited(const std::vector<std::pair<int, std::string>> &visited, const std::pair<int, std::string> &stateStrPair);

    /**
     * 回溯函数，生成NFA合法读入字符串的转移路径
     * @param path 记录从初始状态到当前状态的路径，每个元素是(状态编号, 剩余输入字符串)
     * @param finalStep 当前的步数，是整条路经的最后一步
     * @return 返回NFA合法读入字符串的转移路径Path类实例
     */
    Path backtrace(const std::vector<std::pair<int, std::string>> &path, int finalStep);

    /**
     * 在自动机上执行指定的输入字符串。
     * TODO 请你完成这个函数；请在nfa.cpp中完成。
     * @param text 输入字符串
     * @return 若拒绝，请 return Path::reject(); 。若接受，请手工构造一个Path的实例并返回。
     */
    Path exec(std::string text, bool flag = 0, char last = 0);

    /**
     * 从自动机的文本表示构造自动机
     * 你不需要理解此函数的含义、阅读此函数的实现和调用此函数。
     */
    static NFA from_text(const std::string &text);
};

#endif // CPP_NFA_H
