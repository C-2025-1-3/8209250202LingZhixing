#include<iostream>
#include"student.h"

void Student::setvalue(int num,const char* name, char sex) {
	this->num = num;
	if (name != nullptr)
		strcpy_s(this->name, name);
	else strcpy_s(this->name, "no name");
	this->sex = sex;
}
void Student::display() {
	std::cout << "num: " << num << std::endl;
	std::cout << "name: " << name << std::endl;
	std::cout << "sex:" << sex << std::endl;
}