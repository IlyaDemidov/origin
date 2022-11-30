#include <iostream>
#include <Windows.h>

#define MODE 1
#define add(x, y) ((x) + (y))

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
    
//не смог использова #error при помещение его после #else пишет деректива error 

#endif 


    std::cout << "\n";
    system("pause");
    return 0;
}