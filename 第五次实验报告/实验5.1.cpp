#include<iostream>
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), sec(s) {}
	void setTime() {
		int h, m, s;
		std::cin >> h >> m >> s;
		hour = h;
		minute = m;
		sec = s;
	}
	void display() {
		std::cout << hour << " : " << minute << " : " << sec << std::endl;
	}
};
int main() {
	Time t;
	t.setTime();
	t.display();
	return 0;
}