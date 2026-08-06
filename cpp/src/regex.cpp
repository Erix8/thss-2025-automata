#include "regex.h"

/**
 * 注：如果你愿意，你可以自由的using namespace。
 */

/**
 * 编译给定的正则表达式。
 * 具体包括两个过程：解析正则表达式得到语法分析树（这步已经为你写好，即parse方法），
 * 和在语法分析树上进行分析（遍历），构造出NFA（需要你完成的部分）。
 * 在语法分析树上进行分析的方法，可以是直接自行访问该树，也可以是使用antlr的Visitor机制，详见作业文档。
 * 你编译产生的结果，NFA应保存在当前对象的nfa成员变量中，其他内容也建议保存在当前对象下（你可以自由地在本类中声明新的成员）。
 * @param pattern 正则表达式的字符串
 * @param flags 正则表达式的修饰符
 */
void Regex::compile(const std::string &pattern, const std::string &flags) {
    regexParser::RegexContext *tree = Regex::parse(pattern); // 这是语法分析树
    // TODO 第三次实验中，请你将在上次实验的内容粘贴过来，在其基础上进行修改。
    //
}

/**
 * 在给定的输入文本上，进行正则表达式匹配，返回匹配到的第一个结果。
 * 匹配不成功时，返回空vector( return std::vector<std::string>(); ，或使用返回初始化列表的语法 return {}; )；
 * 第三次实验中，匹配成功时，返回由字符串组成的数组，其中下标为0的元素是匹配到的字符串，
   下标为i(i>=1)的元素是匹配结果中的第i个分组。例：["abcd", "a", "c"]
 * @param text 输入的文本
 * @return 如上所述
 */
std::vector<std::string> Regex::match(std::string text) {
    // TODO 第三次实验中，请你将在上次实验的内容粘贴过来，在其基础上进行修改。
    //
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
std::vector<std::vector<std::string>> Regex::matchAll(std::string text) {
    // TODO 请你完成这个函数
    return {};
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
std::string Regex::replaceAll(std::string text, std::vector<RepItem> replacement) {
    // TODO 请你完成这个函数
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
regexParser::RegexContext *Regex::parse(const std::string &pattern) {
    if (antlrInputStream) throw std::runtime_error("此Regex对象已被调用过一次parse函数，不可以再次调用！");
    antlrInputStream = new antlr4::ANTLRInputStream(pattern);
    antlrLexer = new regexLexer(antlrInputStream);
    antlrTokenStream = new antlr4::CommonTokenStream(antlrLexer);
    antlrParser = new regexParser(antlrTokenStream);
    regexParser::RegexContext *tree = antlrParser->regex();
    if (!tree) throw std::runtime_error("parser解析失败(函数返回了nullptr)");
    auto errCount = antlrParser->getNumberOfSyntaxErrors();
    if (errCount > 0) throw std::runtime_error("parser解析失败，表达式中有" + std::to_string(errCount) + "个语法错误！");
    if (antlrTokenStream->LA(1) != antlr4::Token::EOF)
        throw std::runtime_error("parser解析失败，解析过程未能到达字符串结尾，可能是由于表达式中间有无法解析的内容！已解析的部分："
                                 + antlrTokenStream->getText(antlrTokenStream->get(0),
                                                             antlrTokenStream->get(antlrTokenStream->index() - 1)));
    return tree;
}

// 此析构函数是为了管理ANTLR语法分析树所使用的内存的。你不需要阅读和理解它。
Regex::~Regex() {
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
std::vector<RepItem> RepItem::from_text(const std::string &text) {
    std::string str = text;
    std::vector<RepItem> result;
    std::string content_buf;
    std::string::iterator it;
    while (!str.empty()) {
        auto p = str.find('$');
        auto q = p + 1;
        if (p == std::string::npos) {
            content_buf += str;
            break;
        }
        content_buf += str.substr(0, p);
        if (isdigit(str[p + 1])) { // 形如$123
            // 若能到达此处，必有p+1<str.size()（否则str[p + 1]=='\0'，上面的条件判断会失败）
            for (q = p + 2; isdigit(str[q]); ++q);
            int group_id = atoi(str.substr(p + 1, q).c_str()); // NOLINT(*-err34-c)
            if (!content_buf.empty()) {
                RepItem r{-1, content_buf};
                result.push_back(r);
                content_buf.clear();
            }
            RepItem r{group_id, ""};
            result.push_back(r);
        } else { // $$或形如$a，此时$不表示分组
            content_buf += '$';
            if (str[p + 1] == '$') q = p + 2;
        }
        str = str.substr(q);
    }
    if (!content_buf.empty()) {
        RepItem r{-1, content_buf};
        result.push_back(r);
    }
    return result;
}
