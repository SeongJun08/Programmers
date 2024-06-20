#include <string>
#include <vector>

std::string solution(std::string my_string, int k)
{
    std::string answer = "";
    for (int i = 0; i < k; i++)
    {
        answer += my_string;
    }

    return answer;
}
