#include <iostream>

int main() 
{
    int n;
    std::cin >> n;
    
    if(n % 2 == 0)
    {
        std::cout << n << " is even" << std::endl;
    }
    else if(n % 2 == 1)
    {
        std::cout << n << " is odd" << std::endl;
    }
}
