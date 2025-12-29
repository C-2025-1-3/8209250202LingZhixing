#include<iostream>
class Point {
private:
	int x, y;
public:
	Point(int x = 60, int y = 80) {
		this->x=x;
		this->y=y;
	}
	void setPoint(int i, int j) {
		x = x + i;
		y = y + j;
	}
	void display() {
		std::cout << "(" << x << "," << y << ")" << std::endl;
	}
};
int main() {
	Point s;
	s.setPoint(10, 20);
	s.display();
	return 0;
}