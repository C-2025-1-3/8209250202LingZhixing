#include<iostream>
void peach(int &day, int &rest) {
	rest += 1;
	rest *= 2;
	day--;
	if (day != 0)peach(day, rest);
}
int main() {
	int day = 10, rest = 1;
	peach(day, rest);
	std::cout << rest << std::endl;
}