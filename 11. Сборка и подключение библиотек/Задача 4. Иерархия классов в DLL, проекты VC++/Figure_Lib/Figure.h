#pragma once

#ifdef FIGURE_LIB_EXPORTS
#define FIGURE_LIB_API __declspec(dllexport)
#else
#define FIGURE_LIB_API __declspec(dllimport)
#endif

#include <iostream>

class Figure 
{
private:
    std::string c_name;

public:
     Figure(const std::string& name = "������") :c_name{ name } {}
     const std::string get_name() const;
     FIGURE_LIB_API virtual void print_class();
};