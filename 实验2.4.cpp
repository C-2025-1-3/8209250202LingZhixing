#include <iostream>
int main() {
    double num1, num2;
    char a;
    std::cout << "请输入第一个数字: ";
    if (!(std::cin >> num1)) {
        std::cout << "错误：输入的不是有效的数字！" << std::endl;
    }
    std::cout << "请输入运算符 (+, -, *, /, %): ";
    std::cin >> a;
    std::cout << "请输入第二个数字: ";
    if (!(std::cin >> num2)) {
        std::cout << "错误：输入的不是有效的数字！" << std::endl;
    }
    if (a != '+' && a != '-' && a != '*' && a != '/' && a != '%') {
        std::cout << "错误：非法的运算符！" << std::endl;
    }
    if ((a == '/' || a == '%') && num2 == 0) {
        std::cout << "错误：除数不能为 0！" << std::endl;
    }
    double result;
    switch (a) {
    case '+':
        result = num1 + num2;
        std::cout << num1 << " + " << num2 << " = " << result << std::endl;
        break;
    case '-':
        result = num1 - num2;
        std::cout << num1 << " - " << num2 << " = " << result << std::endl;
        break;
    case '*':
        result = num1 * num2;
        std::cout << num1 << " * " << num2 << " = " << result << std::endl;
        break;
    case '/':
        result = num1 / num2;
        std::cout << num1 << " / " << num2 << " = " << result << std::endl;
        break;
    case '%':
        std::cout << (int)num1 << " % " << (int)num2 << " = " << (int)num1 % (int)num2 << std::endl;
        break;
    }
    return 0;
}