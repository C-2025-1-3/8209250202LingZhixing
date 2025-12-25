#include<iostream>
int main() {
	bool a[101] = { 0 };
	for (int i = 1; i < 101; i++) {
		int t = i;
		while (t <= 100) {
			if (a[t] == 0)a[t] = 1;
			else a[t] = 0;
			t += i;
		}
	}
	for (int i = 1; i < 101; i++) {
		if (a[i] == 1)std::cout << i << " ";
	}
	return 0;
}