#include<iostream>
int main() {
	double x,y;
	std::cout << "输入x" << std::endl;
	std::cin >> x;
	if (x <= 0 || x >= 10)std::cout << "x不在定义域内" << std::endl;
	else if (x > 0 && x < 1)y = 3 - 2 * x;
	else if (x < 5)y = 1 / (2 * x) + 1;
	else if (x <= 10)y = pow(x, 2);
	std::cout << "表达式的值为" << y << std::endl;
	return  0;
}