#include <iostream>
#include <Windows.h>

#include "Library_Dynamic.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Leaver l;
    std::string str;

    std::cout << "Введите имя: "; std::cin >> str;
    std::cout << l.leave(str) << "\n";


    system("pause");
    return 0;
}
