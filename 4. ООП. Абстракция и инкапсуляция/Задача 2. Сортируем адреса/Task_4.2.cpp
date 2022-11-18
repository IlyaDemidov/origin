#include <iostream>
#include <Windows.h>
#include <fstream>
#include <string>

class Address
{
public:
    Address();
    void set_city_name(std::string city) { city_name = city; }
    std::string get_city_name() { return city_name; }

    void set_street_name(std::string street) { street_name = street; }
    std::string get_street_name() { return street_name; }

    void set_house_number(int house) { house_number = house; }
    int get_house_number() { return house_number; }

    void set_apartment_number(int house) { apartment_number = house; }
    int get_apartment_number() { return apartment_number; }

    std::string get_output_address();

private:
    std::string city_name;
    std::string street_name;
    int house_number;
    int apartment_number;
};

Address::Address() :city_name{ "No city name" }, street_name{ "No street name" }, house_number{ 0 }, apartment_number{ 0 }
{

}

Address* creation_and_filling_mas_Address(std::ifstream& file, const int& size_mas)
{
    Address* mas = new Address[size_mas];

    for (size_t i = 0; i < size_mas; i++)
    {
        std::string str;
        file >> str;
        mas[i].set_city_name(str);

        file >> str;
        mas[i].set_street_name(str);

        int number{ 0 };
        file >> number;
        mas[i].set_house_number(number);

        file >> number;
        mas[i].set_apartment_number(number);
    }

    file.close();

    return mas;
}

std::string Address::get_output_address()
{
    std::string str;

    str += this->get_city_name() + ", " + this->get_street_name() + ", " + std::to_string(this->get_house_number()) + ", "
        + std::to_string(this->get_apartment_number());

    return str;
}

void print_mas_address(Address* mas, const int& size_mas)
{
    std::cout << size_mas << "\n";

    for (int i = 0; i < size_mas; i++)
    {
        std::cout << mas[i].get_output_address() << "\n";
    }
}

void output_in_file(std::ofstream& file, Address* mas, const int& size_mas)
{
    file << size_mas << "\n";

    for (int i = 0; i < size_mas; i++)
    {
        file << mas[i].get_output_address() << "\n";
    }

    file.close();
}

void swap_Address(Address& x, Address& y)
{
    Address z = x;
    x = y;
    y = z;
}

void sort_city_name(Address* mas, const int& size_mas)
{
    if (size_mas == 1) return;

    for (int i = 0; i < size_mas - 1; ++i)
    {
        int index{ i };

        for (int j = i + 1; j < size_mas; ++j)
        {
            if (mas[i].get_city_name() > mas[j].get_city_name()) index = j;
        }
        
        swap_Address(mas[i], mas[index]);
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::ifstream in("in.txt");
    if (!in.is_open()) { std::cout << "Фаил не найден !!!"; return 1; }

    int size_mas_Address{ 0 };
    in >> size_mas_Address;

    Address* Addresses{ creation_and_filling_mas_Address(in,size_mas_Address) };

    sort_city_name(Addresses, size_mas_Address);

    //print_mas_address(Addresses, size_mas_Address);

    std::ofstream out("out.txt");

    output_in_file(out, Addresses, size_mas_Address);

    delete[] Addresses;
    system("pause");
    return 0;
}