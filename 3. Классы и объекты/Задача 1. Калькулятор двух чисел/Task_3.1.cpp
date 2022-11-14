#include <iostream>
#include<Windows.h>

class Calculator
{
public:
    Calculator() :num1{ 0 }, num2{0} {}

    double add();
    double multiply();
    double subtract_1_2();
    double subtract_2_1();
    double divide_1_2();
    double divide_2_1();
    bool set_num1(double num1);
    bool set_num2(double num2);

private:
    double num1;
    double num2;
};

double Calculator::add()
{
    return (num1 + num2);
}

double Calculator::multiply()
{
    return (num1 * num2);
}

double Calculator::subtract_1_2()
{
    return (num1 - num2);
}

double Calculator::subtract_2_1()
{
    return (num2 - num1);
}

double Calculator::divide_1_2()
{
    return (num1 / num2);
}

double Calculator::divide_2_1()
{
    return (num2 / num1);
}

bool Calculator::set_num1(double num1)
{
    this->num1 = num1;

    if (num1 == 0) return false; 

    return true;
}

bool Calculator::set_num2(double num2)
{
    this->num2 = num2;

    if (num2 == 0) return false;

    return true;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Calculator Cal;

    while (true)
    {
        while (true)
        {
            std::cout << "Введите num1: ";
            double x{ 0 };
            std::cin >> x;

            if (!Cal.set_num1(x)) { std::cout << "Неверный ввод!" << "\n"; continue; }

            break;
        }

        while (true)
        {
            std::cout << "Введите num2: ";
            double x{ 0 };
            std::cin >> x;

            if (!Cal.set_num2(x)) { std::cout << "Неверный ввод!" << "\n"; continue; }

            break;
        }

        std::cout << "num1 + num2 = " << Cal.add() << "\n";
        std::cout << "num1 - num2 = " << Cal.subtract_1_2() << "\n";
        std::cout << "num2 - num1 = " << Cal.subtract_2_1() << "\n";
        std::cout << "num1 * num2 = " << Cal.multiply() << "\n";
        std::cout << "num1 / num2 = " << Cal.divide_1_2() << "\n";
        std::cout << "num2 / num1 = " << Cal.divide_2_1() << "\n";
    }

    system("pause");
    return 0;
}