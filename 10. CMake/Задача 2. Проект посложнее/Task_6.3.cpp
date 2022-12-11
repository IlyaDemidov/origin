#include <iostream>
#include <Windows.h>

#include "Class_Figure.h"
#include "Class_Triangle.h"
#include "Class_Quadrangle.h"

void print_info(Figure* const f)
{
    f->print_class();
    std::cout << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle x;
    print_info(&x);

    Triangle x1("Прямоугольный треугольник", 10, 20, 30, 50, 60, 90);
    print_info(&x1);

    Triangle x2("Равнобедренный треугольник", 10, 20, 10, 50, 60, 50);
    print_info(&x2);

    Triangle x3("Равносторонний треугольник", 30, 30, 30, 60, 60, 60);
    print_info(&x3);

    Quadrangle y;
    print_info(&y);

    Quadrangle y1("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90);
    print_info(&y1);

    Quadrangle y2("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90);
    print_info(&y2);

    Quadrangle y3("Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40);
    print_info(&y3);

    Quadrangle y4("Ромб", 30, 30, 30, 30, 30, 40, 30, 40);
    print_info(&y4);

    std::cout << "\n";
    system("pause");
    return 0;
}