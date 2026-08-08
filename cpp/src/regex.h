#ifndef CPP_REGEX_H
#define CPP_REGEX_H

#include <utility>
#include <algorithm>
#include "nfa.h"
#include "parser/regexLexer.h"
#include "parser/regexParser.h"

/**
 * 本文件（包括对应的cpp文件）中已经定义好了一些类和函数，类内也已经定义好了一些成员变量和方法。不建议大家修改这些已经定义好的东西。
 * 但是，为了实现功能，你可以自由地增加新的函数、类等，包括可以在已经定义好的类自由地添加新的成员变量和方法。
 */
/**
 * 保证正则表达式字符串和待操作的文本内容都仅包含ASCII字符，且不包含'\0'。
 * 仅保证pattern不含和换行符'\r' '\n'，但文本串可以含有换行符！
 * 具体要求支持和实现的内容列表，请阅读实验文档的“任务说明”部分。
 * 第三次实验需要实现matchAll函数（返回串中所有匹配结果），replaceAll函数（将串中所有匹配结果进行替换）。
 * 同时你将会需要修改match函数和compile函数，以实现诸如返回捕获分组之类的功能。
 * 要求支持的特殊字符包括 . \d \w \s \D \W \S ^ $ \b \B
 * 要求支持的flags包括's' 'm'。
 * 正则表达式中各种字符的具体定义可查看 https://www.runoob.com/regexp/regexp-metachar.html
 */

/**
 * 第三次实验新增，表示replacement中的一个元素。分为两种情况：
 * - groupId为-1，此时content即为要替换的内容。
 * - groupId不为-1，此时必有groupId>=0且content为空串。表示此处应该填入第groupId个分组对应的内容作为替换内容。
 *   - 特别地，如果当前正则表达式中根本没有定义第groupId个分组，则在替换时视该分组的内容为空串""。
 */
struct RepItem
{
  int groupId;
  std::string content;

  /**
   * 由字符串构造出replacement(RepItem的列表)。
   * 你不需要理解此函数的含义、阅读此函数的实现和调用此函数。
   */
  static std::vector<RepItem> from_text(const std::string &text);
};

/**
 * 表示一个正则表达式的类。
 */
class Regex
{
public:
  NFA nfa;           // 正则表达式所使用的NFA
  std::string flags; // 正则表达式所使用的Flags修饰
  int mark = 0;
  std::vector<int> marks;

  // 新添加：
  std::vector<int> is_Group_Init; // 储存分组捕获开端nfa状态序号
  std::vector<int> is_Group_End;  // 储存分组捕获结尾nfa状态序号

  /**
   * 处理语法分析树的Regex节点
   * @param node parse()后得到的语法分析树根节点即Regex节点
   * @return 构造好的NFA的入口和出口
   */
  StateGroup processRegex(regexParser::RegexContext *node);

  /**
   * 处理语法分析树的Expression节点
   * @param node 语法分析树Regex节点下的Expression节点
   * @return 构造好的子NFA的入口和出口
   */
  StateGroup processExpression(regexParser::ExpressionContext *node);

  /**
   * 处理语法分析树的ExpressionItem节点
   * @param node 语法分析树Expression节点下的ExpressionItem节点
   * @return 构造好的子NFA的入口和出口
   */
  StateGroup processExpressionItem(regexParser::ExpressionItemContext *node);

  StateGroup processAnchor(regexParser::AnchorContext *node);

  /**
   * 处理语法分析树的NormalItem节点
   * @param node 语法分析树ExpressionItem节点下的NormalItem节点
   * @return 根据NormalItem匹配规则构造好的子NFA的入口和出口
   */
  StateGroup processNormalItem(regexParser::NormalItemContext *node);

  /**
   * 处理语法分析树的Single节点
   * @param node 语法分析树NormalItem节点下的Single节点
   * @return 根据Single匹配规则构造好的子NFA的入口和出口
   */
  StateGroup processSingle(regexParser::SingleContext *node);

  /**
   * 处理语法分析树的Char节点
   * @param node 语法分析树Single节点下的Char节点
   * @return 根据Char匹配规则构造好的子NFA的入口和出口
   */
  StateGroup processChar(regexParser::CharContext *node);

  /**
   * 处理语法分析树的CharacterGroup节点
   * @param node 语法分析树Single节点下的CharacterGroup节点
   * @return 根据CharacterGroup匹配规则构造好的子NFA的入口和出口
   */
  StateGroup processCharacterGroup(regexParser::CharacterGroupContext *node);

  /**
   * 解析正则表达式的字符串，生成语法分析树。
   * 你应该在compile函数中调用一次本函数，以得到语法分析树。
   * 通常，你不需要改动此函数，也不需要理解此函数实现每一行的具体含义。
   * 但是，你应当对语法分析树的数据结构(RegexContext)有一定的理解，作业文档中有相关的教程可供参考。
   * @param pattern 要解析的正则表达式的字符串
   * @return RegexContext类的对象的指针。保证不为空指针。
   */
  regexParser::RegexContext *parse(const std::string &pattern);

  /**
   * 编译给定的正则表达式。
   * 具体包括两个过程：解析正则表达式得到语法分析树（这步已经为你写好，即parse方法），
   * 和在语法分析树上进行分析（遍历），构造出NFA（需要你完成的部分）。
   * 在语法分析树上进行分析的方法，可以是直接自行访问该树，也可以是使用antlr的Visitor机制，详见作业文档。
   * 你编译产生的结果，NFA应保存在当前对象的nfa成员变量中，其他内容也建议保存在当前对象下（你可以自由地在本类中声明新的成员）。
   * @param pattern 正则表达式的字符串
   * @param flags 正则表达式的修饰符
   */
  void compile(const std::string &pattern, const std::string &flags = "");

  /**
   * 在给定的输入文本上，进行正则表达式匹配，返回匹配到的第一个结果。
   * 匹配不成功时，返回空vector( return std::vector<std::string>(); ，或使用返回初始化列表的语法 return {}; )；
   * 第三次实验中，匹配成功时，返回由字符串组成的数组，其中下标为0的元素是匹配到的字符串，
     下标为i(i>=1)的元素是匹配结果中的第i个分组。例：["abcd", "a", "c"]
   * @param text 输入的文本
   * @return 如上所述
   */
  std::vector<std::string> match(std::string text, bool allFlag = 0, char lastChar = 0);

  /**
   * 第三次实验新增
   * 在给定的输入文本上，进行正则表达式匹配，返回匹配到的**所有**结果。
   * 匹配不成功时，返回空vector( return std::vector<std::string>(); ，或使用返回初始化列表的语法 return {}; )；
   * 匹配成功时，返回一个std::vector<std::vector<std::string>>，其中每个元素是每一个带分组的匹配结果，其格式同match函数的返回值（详见上面）。
   * @param text 输入的文本
   * @return 如上所述
   */
  std::vector<std::vector<std::string>> matchAll(std::string text);

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
  std::string replaceAll(std::string text, std::vector<RepItem> replacement);

  // 目前仅支持一个默认无参构造函数，且不允许拷贝构造（因为类内有指针）。
  Regex() = default;

  Regex(const Regex &) = delete;

  // 析构函数，和以下那些private变量，是为了管理ANTLR语法分析树所使用的内存的。你不需要阅读和理解它们。
  ~Regex();

private:
  antlr4::ANTLRInputStream *antlrInputStream = nullptr;
  regexLexer *antlrLexer = nullptr;
  antlr4::CommonTokenStream *antlrTokenStream = nullptr;
  regexParser *antlrParser = nullptr;
};

#endif // CPP_REGEX_H
