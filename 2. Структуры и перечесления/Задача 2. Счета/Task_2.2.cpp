#include <iostream>
#include <Windows.h>

struct Account
{
	int number{ 0 };
	std::string name;
	double balance{ 0 };
};

void input_account(Account& account)
{
	std::cout << "Введите номер счёта: ";
	std::cin >> account.number;

	std::cout << "Введите имя владельца: ";
	std::cin >> account.name;

	std::cout << "Введите баланс: ";
	std::cin >> account.balance;
}

void print_account(Account& account)
{
	std::cout << "Ваш счёт: " << account.name << ", " << account.number << ", " << account.balance << "\n";
}

void new_balance(Account& account)
{
	std::cout << "Введите новый баланс: ";
	std::cin >> account.balance;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	Account account;
	input_account(account);

	print_account(account);

	new_balance(account);

	print_account(account);

	system("pause");
	return 0;
}