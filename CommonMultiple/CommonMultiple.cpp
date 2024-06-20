#include <iostream>
#include <string>

int gcd(int n, int m) 
{
	int r;
	while (m != 0) {
		r = n % m;
		n = m;
		m = r;
	}
	return n;
}

int solution(int number, int n, int m)
{
	int lcm = (n * m) / gcd(n, m);
	return number % lcm == 0 ? 1 : 0;
}
