#include<iostream>
#include<cstring>
int parseHex(const char* const hexstring) {
	int ans=0;
	int size = strlen(hexstring);//2
	for (int i =size - 1; i >= 0; i--) {
		if(hexstring[i]>='0'&&hexstring[i]<='9'){
			ans+= (hexstring[i]-'0') * pow(16, size - 1 - i);
		}
		else if(hexstring[i]>='A'&&hexstring[i]<='F'){
			ans+= (hexstring[i]-'A'+10) * pow(16, size - 1 - i);
		}
		else if(hexstring[i]>='a'&&hexstring[i]<='f'){
			ans+= (hexstring[i]-'a'+10) * pow(16, size - 1 - i);
		}
		else{
			std::cout << "输入错误！" << std::endl;
			return -1;
		}
	}
	return ans;
}
int main() {
	char hex[100];
	std::cout << "请输入一个十六进制数：";
	std::cin >> hex;
	std::cout<<parseHex(hex)<<std::endl;
	return 0;
}