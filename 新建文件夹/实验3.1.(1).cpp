#include<iostream>
int gcd(int m, int n) {
	while (n != 0) {
		int r = m % n;
		m = n;
		n = r;
	}
	return m;
}
int main() {
	int m, n;
	std::cout << "请输入两个自然数:" << std::endl;
	std::cin >> m >> n;
	std::cout<<m<<"和"<<n<<"的最大公约数是" << gcd(m, n) << std::endl;
	return 0;
}