#include<iostream>
void merge(const int list1[], int size1, const int list2[], int size2,int list3[]) {
	int i = 0, j = 0, k = 0;
	while(i<size1 && j < size2) {
		if (list1[i] < list2[j]) {
			list3[k++] = list1[i++];
		}
		else {
			list3[k++] = list2[j++];
		}
	}
	while (i < size1) {
		list3[k++] = list1[i++];
	}
	while (j < size2) {
		list3[k++] = list2[j++];
	}
}
int main() {
	std::cout << "Enter list1:";
	int size1, size2;
	int list1[80], list2[80],list3[160];;
	std::cin >> size1;
	for (int i = 0; i < size1; i++) {
		std::cin >> list1[i];
	}
	std::cout << "Enter list2:";
	std::cin >> size2;
	for (int i = 0; i < size2; i++) {
		std::cin >> list2[i];
	}
	merge(list1, size1, list2, size2,list3);
	for(int i = 0; i < size1 + size2; i++) {
		std::cout << list3[i] << " ";
	}
}