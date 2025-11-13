#include<iostream>
#include<iomanip>
int main() {
	int sum(0),day(0);
	double money(0);
	for (int i = 1; sum <= 100; i *= 2) {
		sum += i;
		money += 0.8 * i;
		day++;
	}
	std::cout << "每天平均花" << std::setprecision(4)<<money / day << "元" << std::endl;
	return 0;
}