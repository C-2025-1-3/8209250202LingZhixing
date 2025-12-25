#include<iostream>
void asort(int *a, int n) {
	for (int i = 0; i < n; i++) {
		bool isSorted = true; // 标记是否已有序
		for (int j = 0; j < n - 1 - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				isSorted = false;
			}
		}
		if (isSorted) break; // 已有序则提前退出
	}
}
int main() {
	int n;
	std::cin >> n;//元素数
	int *a =new int[n];//动态分配数组
	for(int i=0;i<n;i++) {
		std::cin >> a[i];//输入元素
	}
	asort(a, n);//排序
	int* p = a;
	for (int i = 0; i < n; i++) {
		std::cout << *p++ << " ";//输出元素
	}
	delete[]a;
	p = nullptr;
	a = nullptr;
	return 0;
}