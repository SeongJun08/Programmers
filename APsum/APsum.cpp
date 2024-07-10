#include <string>
#include <vector>

int solution(int a, int d, std::vector<bool> included) 
{
    int answer = 0;
    for (int i = 0; i < included.size(); i++)
    {
        if(included[i])
        {
            answer += a + i * d;
        }
    }
    return answer;
}
