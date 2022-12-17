#pragma once

#include "Figure.h"

class Triangle : public Figure
{
private:

    int c_a, c_b, c_c, c_A, c_B, c_C;

public:
     Triangle(const std::string& name = "Треугольник", const int a = 10, const int b = 20, const int c = 30,
        const int A = 50, const int B = 60, const int C = 70)
        : Figure(name), c_a{ a }, c_b{ b }, c_c{ c }, c_A{ A }, c_B{ B }, c_C{ C } {}

     FIGURE_LIB_API void print_class() override;

};