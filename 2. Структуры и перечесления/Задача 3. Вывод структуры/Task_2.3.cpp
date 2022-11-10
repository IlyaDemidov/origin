#include <iostream>
#include <Windows.h>

struct Address
{
	std::string city;
	std::string street;
	int number_house{ 0 };
	int number_flat{ 0 };
	int index{ 0 };
};

void print_address(Address& address)
{
	std::cout << "Город: " << address.city << "\n"
			  << "Улица: " << address.street << "\n"
			  << "Номер дома: " << address.number_house << "\n"
			  << "Номер квартиры: " << address.number_flat << "\n"
			  << "Индекс: " << address.index << "\n" << "\n";
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Address address_1{ "Москва", "Арбат", 12, 8, 123456 };
	Address address_2{ "Ижевск", "Пушкина", 59, 143, 953769 };

	print_address(address_1);
	print_address(address_2);

	system("pause");
	return 0;
}