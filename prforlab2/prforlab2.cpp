#include<iostream>
int main()
{
	long double q = 1.2 + 0.85 - 0.01;
	std::cout << q << '\n';
	long double w = q / 0.2;
	std::cout << w << '\n';
	long double e = 61 + (1 / 3) + (20 / 3);
	std::cout << e << '\n';
	long double r = w / e;
	std::cout << r << '\n';
	long double t = 13.5 + 11;
	std::cout << t << '\n';
	long double y = 52 * 7 / 52;
	std::cout << y << '\n';
	long double u = t / y;
	std::cout << u << '\n';
	long double i = r + u - 0.1;
	std::cout << i;
	return 0;
}