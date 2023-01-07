#include "Racing_Lib.h"

 

void print_racing()
{
    std::cout << "\nРезультаты гонки:" << std::endl;


    for (int i{1}; auto ts : List_TS)
    {
        std::cout << i << ". " << ts->get_name() << ". Время: ";
        std::cout << ts->get_race_time() << "\n";
        ++i;
    }


    for (auto fig : List_TS)
    {
        delete fig;
        fig = nullptr;
    }

    List_TS.clear();
}