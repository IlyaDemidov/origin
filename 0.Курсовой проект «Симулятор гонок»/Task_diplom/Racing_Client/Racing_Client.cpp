#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <algorithm>

#include "../Transport.h"
#include "../Eagle.h"
#include "../Magic_Carpet.h"
#include "../Broom.h"
#include "../Centavr.h"
#include "../Boots_Off_Road.h"
#include "../Camel.h"
#include "../Camel_Fast.h"
#include "../Racing_Lib.h"

void participants_list()
{
    if (List_TS.size() > 0)
    {
        std::cout << "\nЗарегистрированные транспортные средства: ";

        for (int i{1}; auto& ts : List_TS)
        {
            if (i == 1 || i == List_TS.size()) std::cout << ts->get_name();
            else std::cout << ", " << ts->get_name() << ", ";

            i++;
        }
    }
    std::cout << "\n";
}

void checking_set(Transport* t)
{
    for ( auto ts : List_TS)
    {
       if(ts->get_name() == t->get_name())
       {
           std::cout << t->get_name() << " уже зарегистрирован!\n";
           delete t;
           t = nullptr;
           return;
       }
    }

    std::cout << " " << t->get_name() << " зарегистрирован\n";
    List_TS.push_back(t);
}

void list_1(double distance)
{
    std::cout << '\n' << "Гонка для наземного транспорта. Расстояние: " << distance << "\n";

    std::cout << "1. Верблюд" << "\n";
    std::cout << "2. Верблюд-быстроход" << "\n";
    std::cout << "3. Кентавр" << "\n";
    std::cout << "4. Ботинки-вездеходы" << "\n";
    std::cout << "0. Закончить регистрацию" << "\n";

    std::cout << '\n' << "Выберите транспорт или 0 для окончания процесса регистрации: ";

    bool exit_loop = true;

    while (exit_loop)
    {
        participants_list();

        switch (_getche())
        {
        case '1': {Transport* t1 = new Camel(distance); checking_set(t1); t1 = nullptr; break; }
        case '2': {Transport* t2 = new Camel_Fast(distance); checking_set(t2); t2 = nullptr; break; }
        case '3': {Transport* t3 = new Centavr(distance); checking_set(t3); t3 = nullptr; break; }
        case '4': {Transport* t4 = new Boots_Off_Road(distance); checking_set(t4); t4 = nullptr; break; }
        case '0': if (List_TS.size() < 2)
        {
            std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортного средства!!\n";
            continue; break;
        }
                
            std::cout << '\b' << ' ' << '\b'; exit_loop = false;  break;



        default: std::cout << '\b' << ' ' << '\b'; continue;
        }
       
    }


}

void list_2(double distance)
{
    std::cout << "\nГонка для воздушного транспорта. Расстояние: " << distance << "\n";

    std::cout << "1. Ковёр-самолёт" << "\n";
    std::cout << "2. Орёл" << "\n";
    std::cout << "3. Метла" << "\n";
    std::cout << "0. Закончить регистрацию" << "\n";

    std::cout << "\nВыберите транспорт или 0 для окончания процесса регистрации: ";

    bool exit_loop = true;

    while (exit_loop)
    {
        participants_list();

        switch (_getche())
        {
        case '1': {Transport* t1 = new Magic_Carpet(distance); checking_set(t1); t1 = nullptr; break; }
        case '2': {Transport* t2 = new Eagle(distance); checking_set(t2); t2 = nullptr; break; }
        case '3': {Transport* t3 = new Broom(distance); checking_set(t3); t3 = nullptr; break; }
        case '0': if (List_TS.size() < 2)
        {
            std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортного средства!!\n";
            continue; break;
        }

                std::cout << '\b' << ' ' << '\b'; exit_loop = false;  break;



        default: std::cout << '\b' << ' ' << '\b'; continue;
        }

    }
}

void list_3(double distance)
{
    std::cout << "\nГонка для наземного и воздушного транспорта. Расстояние: " << distance << "\n";

    std::cout << "1. Верблюд" << "\n";
    std::cout << "2. Верблюд-быстроход" << "\n";
    std::cout << "3. Кентавр" << "\n";
    std::cout << "4. Ботинки-вездеходы" << "\n";
    std::cout << "5. Ковёр-самолёт" << "\n";
    std::cout << "6. Орёл" << "\n";
    std::cout << "7. Метла" << "\n";
    std::cout << "0. Закончить регистрацию" << "\n";

    std::cout << "\nВыберите транспорт или 0 для окончания процесса регистрации: ";

    bool exit_loop = true;

    while (exit_loop)
    {
        participants_list();

        switch (_getche())
        {
        case '1': {Transport* t1 = new Camel(distance); checking_set(t1); t1 = nullptr; break; }
        case '2': {Transport* t2 = new Camel_Fast(distance); checking_set(t2); t2 = nullptr; break; }
        case '3': {Transport* t3 = new Centavr(distance); checking_set(t3); t3 = nullptr; break; }
        case '4': {Transport* t4 = new Boots_Off_Road(distance); checking_set(t4); t4 = nullptr; break; }
        case '5': {Transport* t4 = new Magic_Carpet(distance); checking_set(t4); t4 = nullptr; break; }
        case '6': {Transport* t4 = new Eagle(distance); checking_set(t4); t4 = nullptr; break; }
        case '7': {Transport* t4 = new Broom(distance); checking_set(t4); t4 = nullptr; break; }
        case '0': if (List_TS.size() < 2)
        {
            std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортного средства!!\n";
            continue; break;
        }

                std::cout << '\b' << ' ' << '\b'; exit_loop = false;  break;



        default: std::cout << '\b' << ' ' << '\b'; continue;
        }

    }
}

void selection_list(int type_race, double distance)
{
    switch (type_race)
    {
    case 1: list_1(distance); break;
    case 2: list_2(distance); break;
    case 3: list_3(distance); break;
    default: break;
    }
}

int menu_race_selection()
{
    std::cout << "Добро пожаловать в гоночный симулятор!" << "\n";
    std::cout << "1. Гонка для наземного транспорта" << "\n";
    std::cout << "2. Гонка для воздушного транспорта" << "\n";
    std::cout << "3. Гонка для наземного и воздушного транспорта" << "\n";
    std::cout << "Выберите тип гонки: ";

    while (true)    
    {
        switch (_getche()) 
        {
         case '1': std::cout << "\n"; return 1; break;
         case '2': std::cout << "\n"; return 2; break;
         case '3': std::cout << "\n"; return 3; break;
         default: continue;
        }
        break; 
    }

}

double enter_distance()
{
   std::cout << "Укажите длину дистанции (должна быть положительна): ";
   
   while (true)
   {
       double x{ 1 };
       std::cin >> x;
   
       if (std::cin.fail())
       {
           std::cin.clear();
           while (std::cin.get() != '\n');
           continue;
       }
      
       if (x <= 0) continue;

       return x;
   }

}

void registration_1(int type_race, double distance)
{
    std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортных средства" << "\n";
    std::cout << "1. Зарегитрировать транспорт" << "\n";
    std::cout << "Выберите действие: ";

    while (true)
    {
        switch (_getche())
        {
        case '1': selection_list(type_race, distance); break;
        default: std::cout << '\b' << ' ' << '\b'; continue;
        }
        break;
    }

}

bool registration_2(int type_race, double distance)
{
    std::cout << "\n1. Зарегитрировать транспорт" << "\n";
    std::cout << "2. Начать гонку" << "\n";
    std::cout << "Выберите действие: ";

    while (true)
    {
        switch (_getche())
        {
        case '1': selection_list(type_race, distance); break;
        case '2':std::cout << "\n"; return false; break;
        default: std::cout << '\b' << ' ' << '\b'; continue;
        }
        break;
    }

}

bool racing_finish()
{
    std::cout << "\n1. Провести ещё одну гонку\n";
    std::cout << "2.Выйти\n";

    while (true)
    {

        switch (_getche())
        {
        case '1':break;
        case '2':return false; break;
        default: std::cout << '\b' << ' ' << '\b'; continue;
        }
        break;
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    bool racing_loop = true;

    while (racing_loop)
    {
        int race_selection{ 0 };
        
        race_selection = menu_race_selection();

        double distance{ 0 };

        distance = enter_distance();

        registration_1(race_selection, distance);

        bool regist_loop = true;
        while (regist_loop)
        {
            regist_loop = registration_2(race_selection, distance);
        }
       
        std::sort(List_TS.begin(),List_TS.end(), [](Transport* a, Transport* b) { return *a < *b; });

       print_racing();

        racing_loop = racing_finish();
        
    }

    std::cout << "\n\n";
    system("pause");
    return 0;
}