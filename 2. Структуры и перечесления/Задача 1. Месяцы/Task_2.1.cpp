#include <iostream>

enum Month
{
    January = 1, 
    February, 
    March, 
    April,
    May, 
    June, 
    July, 
    August, 
    September, 
    October, 
    November, 
    December
};

int main()
{
    setlocale(LC_ALL, "Rus");

    while (true)
    {
        int number_month{ 0 };
        std::cout << "Введите номер месяца: ";
        std::cin >> number_month;

        if (number_month == 0) { std::cout << "До свидания " << "\n"; break; }
        if (number_month < 0 || number_month > 12) { std::cout << "Неправильный номер! " << "\n"; continue; }
    
        switch (static_cast<Month>(number_month))
        {
            case January: std::cout << "Январь" << "\n"; break;
            case February: std::cout << "Фефраль" << "\n"; break;
            case March: std::cout << "Март" << "\n"; break;
            case April: std::cout << "Апрель" << "\n"; break;
            case May: std::cout << "Май" << "\n"; break;
            case June: std::cout << "Июнь" << "\n"; break;
            case July: std::cout << "Июль" << "\n"; break;
            case August: std::cout << "Август" << "\n"; break;
            case September: std::cout << "Сентябрь" << "\n"; break;
            case October: std::cout << "Октябрь" << "\n"; break;
            case November: std::cout << "Ноябрь" << "\n"; break;
            case December: std::cout << "Декабрь" << "\n"; break;

            default: break;
        }

    }

    system("pause");
    return 0;
}
