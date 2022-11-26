#include <iostream>
#include <Windows.h>

#include "My_mat_functions.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	double x = 0, y = 0;

	std::cout << "Введите первое число: "; std::cin >> x;
	std::cout << "Введите второе число: "; std::cin >> y;

	int operation{ 0 };
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): "; std::cin >> operation;

	switch (operation)
	{
	case 1: std::cout << x << " + " << y << " = " << my_sum(x, y) << "\n"; break;
	case 2: std::cout << x << " - " << y << " = " << my_subtraction(x, y) << "\n"; break;
	case 3: std::cout << x << " * " << y << " = " << my_multiplication(x, y) << "\n"; break;
	case 4: std::cout << x << " / " << y << " = " << my_division(x, y) << "\n"; break;
	case 5: std::cout << x << " в степени " << y << " = " << my_exponentiation(x, y) << "\n"; break;

	default:break;
	}

	system("pause");
	return 0;
}