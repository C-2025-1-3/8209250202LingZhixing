#include<iostream>
void gcd(int &m, int &n) {
	while (n != 0) {
		int r = m%n;
		m = n;
		n = r;
	}
}
void hcf(int& m, int& n) {
	while (m % n != 0) {
		m++;
	}
}
int main() {
	int m, n;
	std::cout << "请输入两个自然数:" << std::endl;
	std::cin >> m >> n;
	int a = m;
	int b = n;
	gcd(m, n);
	std::cout<<a<<"和"<<b<<"的最大公约数是"<<m<<std::endl;
	m = a;
	n = b;
	hcf(m, n);
	std::cout << a << "和" << b << "的最小公倍数是" << m << std::endl;

}