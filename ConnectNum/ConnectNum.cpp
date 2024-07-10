#include <string>
#include <vector>

int solution(std::vector<int> num_list) 
{
    std::string odd, even;
    
    for(int num : num_list)
    {
        if(num % 2 == 0){
            even += std::to_string(num);
        }
        else
        {
            odd += std::to_string(num);
        }
    }
    
    int total_sum = std::stoi(even) + std::stoi(odd);
    return total_sum;
}
