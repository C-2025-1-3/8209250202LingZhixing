#include<iostream>
bool is_prime(int num) {
	int t = 0;
	for (int i = 2; i < num; i++) {
		if (num % i == 0)t++;
	}
	if (t == 0)return true;
	else return false;
}

int main() {
	int num,k=2;
	bool a[21] = { 0 };
	std::cout << "请输入一个整数:" << std::endl;
	std::cin >> num;
	std::cout << is_prime(num) << std::endl;
	int i = 0;
	while (i < 200) {
		if (is_prime(k) == 1) {
			std::cout << k << "\t";
			i++;
		}
		k++;
		if (i % 10 == 0 && a[i / 10 ] == 0) {
			std::cout << "\n";
			a[i / 10 ] = 1;
		}
	}
	return 0;
}