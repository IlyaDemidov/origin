#include "Counter.h"
#include <iostream>

Counter::Counter() :step{ 1 } {}

Counter::Counter(int x) :step{ x } {}

void Counter::set_step()
{

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::string str; std::cin >> str;

    if (str == "да" || str == "Да")
    {
        std::cout << "Введите начальное значение счётчика: ";
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
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        char command{ '0' }; std::cin >> command;
        std::cin.ignore(666, '\n');

        switch (command)
        {
        case '+': increment(); break;
        case '-': decrement(); break;
        case '=': print(); break;
        case 'х': std::cout << "До свидания!"; out = true; break;

        default: std::cout << "Я хз Что Это за команда\n"; break;
        }

    }
}
