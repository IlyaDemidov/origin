#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str;

    std::cout << "Введите имя: ";
    std::cin >> str;

    std::cout << "Здравствуйте, " << str << "\n";

    system("pause");
    return 0;
}