#include <iostream>
#include <Windows.h>

class Figure
{
private:
    std::string c_name;
    

public:
    Figure(const std::string& name = "Фигура") :c_name{ name }{}
    const std::string get_name() const { return c_name; }
    virtual void print_class()
    {
        std::cout << this->get_name() << ":\n";
    }

};

class Triangle : public Figure
{
private:

    int c_a, c_b, c_c, c_A, c_B, c_C;

public:
    Triangle(const std::string& name = "Треугольник", const int a = 10, const int b = 20, const int c = 30,
        const int A = 50, const int B = 60, const int C = 70)
        : Figure(name), c_a{ a }, c_b{ b }, c_c{ c }, c_A{ A }, c_B{ B }, c_C{ C }{}

    void print_class() override
    {
        Figure::print_class();
        std::cout << "Стороны: " << "a=" << c_a << " b=" << c_b << " c=" << c_c << std::endl;
        std::cout << "Углы: " << "A=" << c_A << " B=" << c_B << " C=" << c_C << std::endl;
    }

};

class Quadrangle : public Figure
{
private:

    int c_a, c_b, c_c, c_d, c_A, c_B, c_C, c_D;

public:
    Quadrangle(const std::string& name = "Четырёхугольник", const int a = 10, const int b = 20, const int c = 30, const int d = 40,
        const int A = 50, const int B = 60, const int C = 70, const int D = 80)
        : Figure(name), c_a{ a }, c_b{ b }, c_c{ c }, c_d{ d }, c_A{ A }, c_B{ B }, c_C{ C }, c_D{ D } {}

    void print_class() override
    {
        Figure::print_class();
        std::cout << "Стороны: " << "a=" << c_a << " b=" << c_b << " c=" << c_c << " d=" << c_d << std::endl;
        std::cout << "Углы: " << "A=" << c_A << " B=" << c_B << " C=" << c_C << " D=" << c_D << std::endl;
    }

};

void print_info (Figure* const f)
{
    f->print_class();
    std::cout << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Triangle x;
    print_info(&x);

    Triangle x1("Прямоугольный треугольник", 10, 20, 30, 50, 60, 90);
    print_info(&x1);

    Triangle x2("Равнобедренный треугольник", 10, 20, 10, 50, 60, 50);
    print_info(&x2);

    Triangle x3("Равносторонний треугольник", 30, 30, 30, 60, 60, 60);
    print_info(&x3);

    Quadrangle y;
    print_info(&y);

    Quadrangle y1("Прямоугольник", 10, 20, 10, 20, 90, 90, 90, 90);
    print_info(&y1);

    Quadrangle y2("Квадрат", 20, 20, 20, 20, 90, 90, 90, 90);
    print_info(&y2);

    Quadrangle y3("Параллелограмм", 20, 30, 20, 30, 30, 40, 30, 40);
    print_info(&y3);

    Quadrangle y4("Ромб", 30, 30, 30, 30, 30, 40, 30, 40);
    print_info(&y4);

    std::cout << "\n";
    system("pause");
    return 0;
}