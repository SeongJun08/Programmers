#include <string>
#include <vector>


std::string solution(std::string str1, std::string str2) {
    std::string answer = "";

    int length = str1.length();

    for (int i = 0; i < length; i++)
    {
        answer += str1[i];
        answer += str2[i];
    }

    return answer;
}

