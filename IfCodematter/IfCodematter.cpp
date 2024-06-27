#include <string>
#include <vector>

std::string solution(std::string code) {
    std::string ret = "";
    int mode = 0;

    for (int i = 0; i < code.size(); i++) {
        if (code[i] == '1') {
            mode = 1 - mode; // mode가 0이면 1로, 1이면 0으로 전환
        }
        else {
            if ((mode == 0 && i % 2 == 0) || (mode == 1 && i % 2 == 1)) {
                ret += code[i];
            }
        }
    }

    return ret.empty() ? "EMPTY" : ret;
}
