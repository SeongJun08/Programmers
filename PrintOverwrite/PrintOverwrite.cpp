#include <string>
#include <vector>

std::string solution(std::string my_string, std::string overwrite_string, int s)
{
    int overwrite_length = overwrite_string.length();

    my_string.replace(s, overwrite_length, overwrite_string);

    return my_string;
}
