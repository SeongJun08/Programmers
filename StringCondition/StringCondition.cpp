#include <iostream>
#include <string>

int solution(std::string ineq, std::string eq, int n, int m)
{
	if (ineq == ">")
	{
		if (eq == "=") 
		{
			return n >= m ? 1 : 0;
		}
		else if (eq == "!")
		{
			return n > m ? 1 : 0;
		}
	}
	else if (ineq == "<")
	{
		if (eq == "=")
		{
			return n <= m ? 1 : 0;
		}
		else if (eq == "!")
		{
			return n < m ? 1 : 0;
		}
	}
}


