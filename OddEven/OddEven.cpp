#include <iostream>
#include <string>

int solution(int n)
{
	int answer = 0;

	if (n % 2 != 0)
	{
		for (int i = 0; i <= n; i++)
		{
			if (i % 2 != 0)
			{
				answer += i;
			}
		}
		return answer;
	}
	else if (n % 2 == 0)
	{
		for (int i = 0; i <= n; i++)
		{
			if (i % 2 == 0)
			{
				answer += (i * i);
			}
		}
		return answer;
	}
}


