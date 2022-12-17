#include "Triangle.h"

void Triangle::print_class()
{
	Figure::print_class();
	std::cout << "Стороны: " << "a=" << c_a << " b=" << c_b << " c=" << c_c << std::endl;
	std::cout << "Углы: " << "A=" << c_A << " B=" << c_B << " C=" << c_C << std::endl;
}