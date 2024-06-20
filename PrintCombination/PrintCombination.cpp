#include <iostream>
#include <string>

int solution(int a, int b)
{
	std::string ab = std::to_string(a) + std::to_string(b);
	std::string ba = std::to_string(b) + std::to_string(a);

	if (std::stoi(ab) >= std::stoi(ba)) return std::stoi(ab);
	else return std::stoi(ba);
}
