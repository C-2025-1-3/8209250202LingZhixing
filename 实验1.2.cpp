#define PI 3.14
#include<iostream>
int main() {
	int r, h;
	int V;
	std::cout << "输入圆锥的底面半径和高：" << std::endl;
	std::cin >> r >> h;
	V = (PI * r * r * h) / 3;
	std::cout << "该圆锥体积为" << V << std::endl;
}