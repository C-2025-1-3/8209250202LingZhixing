#include<iostream>
class Prism {
private:
	int length, width, height;
public:
	Prism(int l = 0, int w = 0, int h = 0) : length(l), width(w), height(h) {}
	int volume() {
		return length * width * height;
	}
	void showVolume() {
		std::cout << "Volume: " << volume() << std::endl;
	}
};
int main() {
	Prism p1(3, 4, 5);
	p1.showVolume();
	Prism p2(2, 6, 7);
	p2.showVolume();
	Prism p3(4,5,6);
	p3.showVolume();
	return 0;
}