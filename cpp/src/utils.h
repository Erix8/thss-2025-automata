#ifndef CPP_UTILS_H
#define CPP_UTILS_H

#include <string>
#include <fstream>

#if defined(_WIN32) || defined(__CYGWIN__)

#include <io.h>
#include <fcntl.h>

#endif

/**
 * 将NFA导出成JFLAP的格式，以便于可视化。生成的文件可以直接用JFLAP打开。
 * 这是一个给你的工具函数，你直接使用即可，不需要理解和修改其中的内容。
 * 注意提交OJ的版本不应调用此函数，否则OJ评测机会产生错误(PE 输出格式错误)。
 * @param nfa
 * @param filename 可选 默认保存在当前目录下的result.jff文件。
 * @param distance 可选 JFLAP图中两个状态的距离
 * @param yLevels 可选 JFLAP图中纵向有多少级。默认为5，如果画出来的东西不便查看建议调小到2~3。
 */
inline void exportJFLAP(const NFA &nfa, std::string filename = "./result.jff", int distance = 80, int yLevels = 5) {
    const std::vector<std::string> seqStrs = {"①", "②", "③", "④", "⑤", "⑥", "⑦", "⑧", "⑨"};
    std::ofstream ss(filename);
    ss << "<?xml version=\"1.0\" encoding=\"UTF-8\" standalone=\"no\"?><structure>\n"
          "<type>fa</type>\n<automaton>\n";
    for (int i = 0; i < nfa.num_states; ++i) {
        int y = abs(((i / 2) % (yLevels * 2 - 2)) - (yLevels - 1)) * distance;
        ss << "<state id=\"" << i << "\" name=\"" << i << "\"><x>" << i * distance << "</x><y>" << y << "</y>";
        if (i == 0) ss << "<initial/>";
        if (nfa.is_final[i]) ss << "<final/>";
        ss << "</state>\n";
        for (int j = 0; j < nfa.rules[i].size(); ++j) {
            const auto &rule = nfa.rules[i][j];
            ss << "<transition><from>" << i << "</from><to>" << rule.dst << "</to>";
            if (rule.type == EPSILON) {
                if (nfa.rules[i].size() == 1) ss << "<read/>";
                else ss << "<read>λ" << seqStrs[j] << "</read>";
            } else {
                std::string read = rule.by;
                if (read == "<") read = "&lt;"; // 转义掉<符号
                if (rule.type == SPECIAL) read = "\\" + rule.by;
                else if (rule.type == RANGE) read = rule.by + "-" + rule.to;
                ss << "<read>" << read << "</read>";
            }
            ss << "</transition>\n";
        }
    }
    ss << "</automaton>\n</structure>\n";
    std::cout << "JFLAP exported to " << filename << " !" << std::endl;
}

inline std::string strip(const std::string &s) {
    auto start = s.find_first_not_of(" \n\r\f\t\v");
    auto end = s.find_last_not_of(" \n\r\f\t\v");
    if (start == -1 || end == -1) return "";
    return s.substr(start, end + 1 - start);
}

inline void setStdoutToBinary() {
#ifdef _WIN32
    _setmode(_fileno(stdout), _O_BINARY);
#endif
#ifdef __CYGWIN__
    setmode(fileno(stdout), O_BINARY);
#endif
}


#endif //CPP_UTILS_H
