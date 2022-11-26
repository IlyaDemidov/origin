#include <iostream>
#include <Windows.h>
#include "Counter.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Counter One;

    One.set_step();
    One.selection();


    std::cout << "\n";
    system("pause");
    return 0;
}