#include <iostream>
#include <string>
#include <vector>

int solution(int n, std::string control)
{
    for (int i = 0; i < control.size(); i++)
    {
        if (control[i] == 'w') { n += 1; }
        else if (control[i] == 's') { n -= 1; }
        else if (control[i] == 'd') { n += 10; }
        else if (control[i] == 'a') { n -= 10; }
    }
    
    return n;
}

int main()
{
    int n = 0;
    std::string control = { "wsdawsdassw" };
    std::cout << solution(n, control) << std::endl;

}
