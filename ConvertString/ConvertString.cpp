#include <string>
#include <vector>

std::string solution(std::vector<std::string> arr) 
{
    std::string answer = "";
    for (int i = 0; i < arr.size(); i++)
    {
        answer += arr[i];
    }

    return answer;
}
