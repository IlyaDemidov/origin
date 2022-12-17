#pragma once

#include "Figure.h"

class Quadrangle : public Figure
{
private:

    int c_a, c_b, c_c, c_d, c_A, c_B, c_C, c_D;

public:
     Quadrangle(const std::string& name = "Четырёхугольник", const int a = 10, const int b = 20, const int c = 30, const int d = 40,
        const int A = 50, const int B = 60, const int C = 70, const int D = 80)
        : Figure(name), c_a{ a }, c_b{ b }, c_c{ c }, c_d{ d }, c_A{ A }, c_B{ B }, c_C{ C }, c_D{ D } {}

     FIGURE_LIB_API void print_class() override;

};