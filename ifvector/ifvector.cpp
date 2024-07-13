#include <string>
#include <vector>

std::vector<int> solution(std::vector<int> num_list)
{
    std::vector<int> answer = num_list;

    int last = answer.back();
    int prev = answer[answer.size() - 2];

    if (last > prev)
    {
        answer.push_back(last - prev);
    }
    else answer.push_back(last * 2);

    return answer;
}
