#include<iostream>
#include<iomanip>
#include"mytemperature.h"
int main() {
	double cel = 40.0, fah = 120.0;
	std::cout << std::fixed;
	std::cout << "Celsius" << "\t" << "Fahrenheit" << "\t|\t";
	std::cout << "Fahrenheit" << "\t" << "Celsius" << std::endl;
	for (int i = 0; i < 10; i++) {
		double f = celsius_to_fah(cel);
		double c = fahrenheit_to_cels(fah);
		std::cout << std::setprecision(1);
		std::cout << cel << "\t" << f << "\t|\t";
		std::cout << fah << "\t" <<std::setprecision(2)<< c << std::endl;
		cel--;
		fah -= 10;
	}
	return 0;
}