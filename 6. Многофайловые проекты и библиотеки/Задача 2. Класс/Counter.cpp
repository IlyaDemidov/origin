#include "Counter.h"
#include <iostream>

Counter::Counter() :step{ 1 } {}

Counter::Counter(int x) :step{ x } {}

void Counter::set_step()
{

    std::cout << "�� ������ ������� ��������� �������� ��������? ������� �� ��� ���: ";
    std::string str; std::cin >> str;

    if (str == "��" || str == "��")
    {
        std::cout << "������� ��������� �������� ��������: ";
        std::cin >> step;
    }

}

void Counter::increment()
{
    step++;
}

void Counter::decrement()
{
    step--;
}

void Counter::print()
{
    std::cout << step << "\n";
}

void Counter::selection()
{
    bool out = false;

    while (!out)
    {
        std::cout << "������� ������� ('+', '-', '=' ��� 'x'): ";
        char command{ '0' }; std::cin >> command;
        std::cin.ignore(666, '\n');

        switch (command)
        {
        case '+': increment(); break;
        case '-': decrement(); break;
        case '=': print(); break;
        case '�': std::cout << "�� ��������!"; out = true; break;

        default: std::cout << "� �� ��� ��� �� �������\n"; break;
        }

    }
}
