#include<iostream>
#include<cmath>
int main() {
	double a, x;
	std::cout << "输入一个实数:" << std::endl;
	std::cin >> a;
	if (a < 0)std::cout << "负数无平方根" << std::endl;
	if (a == 0)std::cout << "0的平方根为0" << std::endl;
	else {
		x = a;
		do {
			double t =  (x + a / x)/2;
			if (fabs(t - x) <=pow(10,-5)) {
				x = t;
				break;
			}
			x = t;
		} while (1);
	}
	std::cout << a << "的平方根为" << x;
	return 0;
}