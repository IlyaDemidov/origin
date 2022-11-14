#include <iostream>
#include <Windows.h>

class Counter
{
public:
    Counter();

private:
    int step;
    void selection();
    void set_step();
};

Counter::Counter():step{1}
{
    set_step();
    selection();
}

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
        case '+': step++; break;
        case '-': step--; break;
        case '=': std::cout << step << "\n"; break;
        case 'х': std::cout << "До свидания!"; out = true; break;

        default: std::cout << "Я хз Что Это за команда\n"; break;
        }

    }
}


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter One;

    std::cout << "\n";
    system("pause");
    return 0;
}