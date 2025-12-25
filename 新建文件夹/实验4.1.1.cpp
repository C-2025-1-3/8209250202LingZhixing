#include<iostream>
int main() {
	int a[10],b[10];
	int m = 0;
	for (int i = 0; i < 10; i++) {
		int t = 0;
		std::cin >> a[i];
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j])t++;
		}
		if (t == 0)b[m] = a[i], m++;
	}
	for (int i = 0; i < m; i++)std::cout << b[i] << " ";
	return 0;
}