#include <iostream>
#include <string>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string str;

    std::cout << "������� ���: ";
    std::cin >> str;

    std::cout << "������������, " << str << "\n";

    system("pause");
    return 0;
}