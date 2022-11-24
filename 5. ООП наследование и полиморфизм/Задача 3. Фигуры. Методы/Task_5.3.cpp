#include <iostream>
#include <Windows.h>

class Figure
{
private:
    std::string c_name;
    int sides_count;

public:
    Figure(const std::string& name = "Фигура", int count = 0) :c_name{ name }, sides_count{count} {}

    const std::string get_name() const { return c_name; }

    virtual void print_class()
    {
        std::cout << this->get_name() << ":\n";

        this->check() ? std::cout << "Правильная" << "\n" : std::cout << "Неправильная" << "\n";

        std::cout << "Количество сторон: " << this->get_sides_count() << "\n";
    }

    const int& get_sides_count()
    {
        return sides_count;
    }

    virtual bool check()
    {
        if (sides_count == 0) return true;

        return false;
    }

};

class Triangle : public Figure
{
protected:

    int c_a, c_b, c_c, c_A, c_B, c_C;

public:
    Triangle(const std::string& name = "Треугольник", int count = 3, const int a = 10, const int b = 20, const int c = 30,
        const int A = 50, const int B = 60, const int C = 70)
        : Figure(name, count), c_a{ a }, c_b{ b }, c_c{ c }, c_A{ A }, c_B{ B }, c_C{ C } {}

    void print_class() override
    {
        Figure::print_class();
        std::cout << "Стороны: " << "a=" << c_a << " b=" << c_b << " c=" << c_c << std::endl;
        std::cout << "Углы: " << "A=" << c_A << " B=" << c_B << " C=" << c_C << std::endl;
    }

    virtual bool check()
    {
        if (this->get_sides_count() == 3 && (c_A+c_B+c_C == 180)) return true;

        return false;
    }

};

class Quadrangle : public Figure
{
protected:

    int c_a, c_b, c_c, c_d, c_A, c_B, c_C, c_D;

public:
    Quadrangle(const std::string& name = "Четырёхугольник", int count = 4, const int a = 10, const int b = 20, const int c = 30, const int d = 40,
        const int A = 50, const int B = 60, const int C = 70, const int D = 80)
        : Figure(name, count), c_a{ a }, c_b{ b }, c_c{ c }, c_d{ d }, c_A{ A }, c_B{ B }, c_C{ C }, c_D{ D } {}

    void print_class() override
    {
        Figure::print_class();
        std::cout << "Стороны: " << "a=" << c_a << " b=" << c_b << " c=" << c_c << " d=" << c_d << std::endl;
        std::cout << "Углы: " << "A=" << c_A << " B=" << c_B << " C=" << c_C << " D=" << c_D << std::endl;
    }

    virtual bool check()
    {
        if (this->get_sides_count() == 4 && (c_A + c_B + c_C + c_D == 360)) return true;

        return false;
    }

};

class Right_triangle : public Triangle
{
public:
    Right_triangle(const std::string& name = "Прямоугольный треугольник", int count = 3, const int a = 10, const int b = 20, const int c = 30,
        const int A = 50, const int B = 60, const int C = 90) : Triangle(name, count, a, b, c, A, B, C) {}

    virtual bool check()
    {
        if (Triangle::check() && c_C == 90) return true;

        return false;
    }

private:
    
};

class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle(const std::string& name = "Равнобедренный треугольник", int count = 3, const int a = 10, const int b = 20, const int c = 10,
        const int A = 50, const int B = 60, const int C = 50) : Triangle(name, count, a, b, c, A, B, C) {}

    virtual bool check()
    {
        if (Triangle::check() && (c_a == c_c) && (c_A == c_C)) return true;

        return false;
    }

private:

};

class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle(const std::string& name = "Равносторонний треугольник", int count = 3, const int a = 30, const int b = 30, const int c = 30,
        const int A = 60, const int B = 60, const int C = 60) : Triangle(name, count, a, b, c, A, B, C) {}

    virtual bool check()
    {
        if (Triangle::check() && (c_a == c_b) && (c_b == c_c) && (c_A == c_B) && (c_B == c_C)) return true;

        return false;
    }

private:

};

class Rectangle_ : public Quadrangle
{
public:
    Rectangle_(const std::string& name = "Прямоугольник", int count = 4, const int a = 10, const int b = 20, const int c = 10, const int d = 20,
        const int A = 90, const int B = 90, const int C = 90, const int D = 90) : Quadrangle(name, count, a, b, c, d, A, B, C, D) {}
    
    virtual bool check()
    {
        if (Quadrangle::check() && (c_a == c_c) && (c_b == c_d) && (c_A == 90) && (c_B == 90) && (c_C == 90) && (c_D == 90)) return true;

        return false;
    }

private:

};

class Square : public Quadrangle
{
public:
    Square(const std::string& name = "Квадрат", int count = 4, const int a = 20, const int b = 20, const int c = 20, const int d = 20,
        const int A = 90, const int B = 90, const int C = 90, const int D = 90) : Quadrangle(name, count, a, b, c, d, A, B, C, D) {}

    virtual bool check()
    {
        if (Quadrangle::check() && (c_a == c_b) && (c_a == c_c) && (c_a == c_d) && (c_A == 90) && (c_B == 90) && (c_C == 90) && (c_D == 90)) return true;

        return false;
    }

private:

};

class Parallelogram : public Quadrangle
{
public:
    Parallelogram(const std::string& name = "Параллелограмм", int count = 4, const int a = 20, const int b = 30, const int c = 20, const int d = 30,
        const int A = 30, const int B = 40, const int C = 30, const int D = 40) : Quadrangle(name, count, a, b, c, d, A, B, C, D) {}

    virtual bool check()
    {
        if (Quadrangle::check() && (c_a == c_c) && (c_b == c_d) && (c_A == c_C) && (c_B == c_D)) return true;

        return false;
    }

private:

};

class Rhomb : public Quadrangle
{
public:
    Rhomb(const std::string& name = "Ромб", int count = 4, const int a = 30, const int b = 30, const int c = 30, const int d = 30,
        const int A = 30, const int B = 40, const int C = 30, const int D = 40) : Quadrangle(name, count, a, b, c, d, A, B, C, D) {}

    virtual bool check()
    {
        if (Quadrangle::check() && (c_a == c_b) && (c_a == c_c) && (c_a == c_d) && (c_A == c_C) && (c_B == c_D)) return true;

        return false;
    }

private:

};

void print_info(Figure* const f)
{
    f->print_class();
    std::cout << std::endl;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Figure z;
    print_info(&z);

    Triangle x;
    print_info(&x);

    Right_triangle x1;
    print_info(&x1);

    Right_triangle x11("Прямоугольный треугольник", 3, 10, 20, 30, 50, 40, 90);
    print_info(&x11);

    Isosceles_triangle x2;
    print_info(&x2);

    Equilateral_triangle x3;
    print_info(&x3);

    Quadrangle y;
    print_info(&y);

    Rectangle_ y1;
    print_info(&y1);

    Square y2;
    print_info(&y2);

    Parallelogram y3;
    print_info(&y3);

    Rhomb y4;
    print_info(&y4);

    std::cout << "\n";
    system("pause");
    return 0;
}