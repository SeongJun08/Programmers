#include <iostream>

int main()
{
    char str[20]{};
    std::cin >> str;

    for (int i = 0; i < 20; i++)
    {
        if (65 <= str[i] && str[i] <= 90)
        {
            str[i] += 32;
        }
        else if (97 <= str[i] && str[i] <= 122)
        {
            str[i] -= 32;
        }
        if (str[i] == '\0')
        {
            break;
        }

        std::cout << (char)str[i];
    }
}
