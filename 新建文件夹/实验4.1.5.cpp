#include<iostream>
int indexOf(const char s1[],const char s2[],int size1,int size2) {
	if (size1 == 0 ||  size1 > size2)return -1;
	for (int i = 0; i < size2 - size1+1; i++) {
		if (s1[0] == s2[i]) {
			int j = 0;
			for (j = 0; j < size1; j++) {
				if (s2[i + j] != s1[j]) {
					break;
				}
			}
			if (j == size1)return i;
		}
		else continue;
	}
	return -1;
}
int main() {
	char s1[100], s2[100];
	int i = 0,j=0;
	std::cout << "Enter the first string:";
	while ((s1[i] = std::cin.get()) != '\n') {
		i++;
	}
	std::cout << "Enter the second string:" ;
	while ((s2[j] = std::cin.get()) != '\n') {
		j++;
	}
	std::cout << indexOf(s1, s2,i,j) << std::endl;
	return 0;
}