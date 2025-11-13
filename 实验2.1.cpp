#include<iostream>
int main() {
	char a;
	std::cin >> a;
	if ('a' <= a && a <= 'z')std::cout << char(a - 32) << std::endl;
	else std::cout << char(a + 1) << std::endl;
	return 0;
}