#include <iostream>
#include <Windows.h>
#include <string>
#include <stdexcept>

int function(const std::string& str,const int& forbidden_length)
{
    size_t str_length{ str.length() };

    if (str_length == forbidden_length) throw std::runtime_error ("Вы ввели слово запретной длины! До свидания");

    return str_length;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Введите запретную длину: ";
    int forbidden_length{ 0 };
    std::cin >> forbidden_length;

    std::string str;

    while (true)
    {
        std::cout << "Введите слово: ";
        std::cin >> str;

        try
        {
            function(str, forbidden_length);
        }

        catch(const std::exception& exception)
        {
            std::cerr << exception.what() << '\n';
            break;
        }
        
        std::cout << "Длина слова " << '"' << str << '"' << " равна " << function(str, forbidden_length) << "\n";
    }


    std::cout << "\n";
    system("pause");
    return 0;

}