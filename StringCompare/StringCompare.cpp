#include <iostream>
#include <string>

int solution(int a, int b)
{
	std::string ab = std::to_string(a) + std::to_string(b);
	int ba = 2 * a * b;

	if (std::stoi(ab) >= ba) return std::stoi(ab);
	else return ba;
}
