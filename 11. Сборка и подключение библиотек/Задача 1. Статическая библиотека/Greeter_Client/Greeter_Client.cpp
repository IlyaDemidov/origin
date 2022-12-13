#include <iostream>
#include <Windows.h>

#include "../Greeter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Greeter g;
    std::string str;

    std::cout << "Введите имя: "; std::cin >> str;
    std::cout << g.greet(str) << "\n";


    system("pause");
    return 0;
}
