#include <iostream>
#include <Windows.h>

class Figure
{
private:
    std::string c_name;
    int c_sides_count;

public:
   Figure(const std::string& name = "Фигура", int count = 0):c_name{ name }, c_sides_count{count} {}
   const std::string get_name() const { return c_name; }
   const int get_sides_count() const { return c_sides_count; }

};

class Triangle : public Figure
{
private:


public:
    Triangle(const std::string& name = "Треугольник", int count = 3) : Figure(name, count) {}

};

class Quadrangle : public Figure
{
private:


public:
    Quadrangle(const std::string& name = "Четырёхугольник", int count = 4) : Figure(name, count) {}

};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::cout << "Количество сторон: " << "\n";

    Figure x;
    std::cout << x.get_name() << ": " << x.get_sides_count() << "\n";

    Triangle y;
    std::cout << y.get_name() << ": " << y.get_sides_count() << "\n";

    Quadrangle z;
    std::cout << z.get_name() << ": " << z.get_sides_count() << "\n";
   
    std::cout << "\n";
    system("pause");
    return 0;
}