#pragma once

#include <iostream>

class Figure
{
private:
    std::string c_name;

public:
    Figure(const std::string& name = "Фигура") :c_name{ name } {}
    const std::string get_name() const;
    virtual void print_class();
};