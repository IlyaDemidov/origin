#include "Class_Figure.h"

const std::string Figure::get_name() const { return c_name; }

void Figure::print_class() 
{
	std::cout << this->get_name() << ":\n";
}
