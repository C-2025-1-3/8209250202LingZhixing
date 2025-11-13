#include<iostream>
int main() {
	char a;
	int letters = 0, spaces = 0, numbers = 0, others = 0;
	std::cout << "请输入一行字符" << std::endl;
	while ((a = std::cin.get()) != '\n') {
		if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))letters++;
		else if (a == ' ')spaces++;
		else if (a >= '0' && a <= '9')numbers++;
		else others++;
	}
	std::cout << "英文字母: " << letters << "个" << std::endl;
	std::cout << "空格: " << spaces << "个" << std::endl;
	std::cout << "数字: " << others << "个" << std::endl;
	std::cout << "其他字符: " << others << "个" << std::endl;
	return 0;
}