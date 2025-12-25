#include<iostream>
void count(const char s[], int counts[],int size) {
	
	for (int k = 0; k < size; k++) {
		int i = 65, j = 97;
		while (i <= 90) {
			if(s[k]==char(i)||s[k]==char(j)) {
				counts[i - 65]++;
				break;
			}
			else {
				i++;
				j++;
			}
		}
	}
	for(int m=0; m < 26; m++) {
		if (counts[m] != 0) {
			std::cout << char(m + 97) << ":" << counts[m] << "times" << std::endl;
		}
	}
}
int main() {
	int counts[26];
	for(int i = 0; i < 26; ++i) {
		counts[i] = 0;
	}
	char s[100];
	std::cout << "Enter a string:";
	int i = 0;
	while ((s[i] = std::cin.get()) != '\n') {
		i++;
	}
	count(s, counts,i);
}