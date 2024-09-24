#include <string>
#include <vector>

std::vector<int> solution(std::vector<int>arr, std::vector<std::vector<int>> queries)
{
    std::vector<int> answer;
    for (const std::vector<int>& query : queries)
    {
        int s = query[0];
        int e = query[1];
        int k = query[2];
        
        for(int i = s; i <= e; i++)
        {
            if(i % k == 0)
            {
                arr[i] += 1;
            }
        }
    }
    answer = arr;
    return answer;
}