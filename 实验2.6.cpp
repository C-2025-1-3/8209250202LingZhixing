#include<iostream>
int main() {
	int a, b,GCD,LCM;
	std::cout << "输入两个正整数:" << std::endl;
	std::cin >> a >> b;
	int t = (a > b) ? a : b;
	for (int i = 2; i < t; i++) {
		if (a % i == 0 && b % i == 0)GCD = i;
	}
	std::cout << a << "和" << b << "的最大公约数为" << GCD << std::endl;
	for (int i = t + 1; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			LCM = i;
			break;
		}
	}
	std::cout << a << "和" << b << "的最小公倍数为" << LCM << std::endl;
	return 0;
}