#pragma once

#include "Figure.h"

void print_info(Figure* const f)
{
    f->print_class();
    std::cout << std::endl;
}