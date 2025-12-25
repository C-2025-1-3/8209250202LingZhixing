#include<iostream>
int main() {
	double list[10];
	int listsize = 1;
	for(int i = 0; i < 10; i++) {
		std::cin >> list[i];
		bool changed = 1;
		do {
			changed = 0;
			for(int j=0; j < i; j++) {
				if(list[j] > list[j + 1]) {
					double temp = list[j];
					list[j] = list[j + 1];
					list[j + 1] = temp;
					changed = 1;
				}
			}
		} while (changed);
	}
	for(int i=0; i < 10; i++) {
		std::cout << list[i] << " ";
	}
	return 0;
}