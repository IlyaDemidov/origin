#include <iostream>
#include <Windows.h>

#define MOD

#if !defined (MODE)
#error MODE не определён
#endif

#if MODE == 1
    int add(int x, int y) { return x + y; }   
#endif

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


#if MODE == 0
    std::cout << "Работаю в режиме тренировки" << "\n";

#elif MODE == 1
    std::cout << "Работаю в боевом режиме" << "\n";
    
    int num1{ 0 }, num2{ 0 };
    std::cout << "Введите число 1: ";
    std::cin >> num1;
    std::cout << "Введите число 2: ";
    std::cin >> num2;
   
    std::cout << "Результат сложения: " << add(num1, num2) << "\n";;
    

#else
    std::cout << "Неизвестный режим. Завершение работы" << "\n";
#endif


    std::cout << "\n";
    system("pause");
    return 0;
}