#include<iostream>
int main() {
	float a, b, c;
	std::cin >> a >> b >> c;
	if ((a + b) <= c || (a + c) <= b || (b + c) <= a)std::cout << "此三个边长构不成三角形" << std::endl;
	else std::cout << "周长为" << a + b + c << std::endl;
	if (a == b || a == c || b == c)std::cout << "是等腰三角形" << std::endl;
	else std::cout<< "不是等腰三角形" << std::endl;
	return 0;
}