#include "Class_Quadrangle.h"

void Quadrangle::print_class()
{
	Figure::print_class();
	std::cout << "�������: " << "a=" << c_a << " b=" << c_b << " c=" << c_c << " d=" << c_d << std::endl;
	std::cout << "����: " << "A=" << c_A << " B=" << c_B << " C=" << c_C << " D=" << c_D << std::endl;
}