#include <iostream>
#include <Windows.h>

class Fraction
{
private:
	int numerator_;
	int denominator_;

	int gcd(int a, int b)
	{
		if (b == 0)return a;
		else return gcd(b, a % b);
	}

	void reduce()
	{

		int c = gcd(numerator_, denominator_);
		if (c < 0) c *= -1;

		numerator_ /= c;
		denominator_ /= c;

	}

public:
	Fraction(int numerator = 0, int denominator = 1) :numerator_{ numerator }, denominator_{ denominator } {}

	auto operator <=> (const Fraction& frac) const = default;

	friend const std::ostream& operator << (std::ostream& out, const Fraction& frac)
	{
		out << frac.numerator_ << "/" << frac.denominator_;

		return out;
	}

	friend const std::ostream& operator << (std::ostream& out, const char* x)
	{
		
		out << x;

		return out;
		
	}

	friend std::istream& operator >>(std::istream& in, Fraction& frac)
	{
		static int number{ 1 };

		std::cout << "Введите числитель дроби " << number << ": "; in >> frac.numerator_;
		std::cout << "Введите знаменатель дроби " << number << ": "; in >> frac.denominator_;
		number++;

		return in;
	}

	Fraction& operator + (Fraction& frac)
	{
		Fraction temp;

		temp.numerator_ = frac.numerator_ * denominator_ + numerator_ * frac.denominator_;
		temp.denominator_ = frac.denominator_ * denominator_;
		temp.reduce();

		return temp;
	}

	Fraction& operator - (Fraction& frac)
	{
		Fraction temp;

		temp.numerator_ = numerator_ * frac.denominator_ - denominator_ * frac.numerator_;
		temp.denominator_ = denominator_ * frac.denominator_;
		temp.reduce();

		return temp;
	}

	Fraction& operator * (Fraction& frac)
	{
		Fraction temp;

		temp.numerator_ = numerator_ * frac.numerator_;
		temp.denominator_ = denominator_ * frac.denominator_;
		temp.reduce();

		return temp;
	}

	Fraction& operator / (Fraction& frac)
	{
		Fraction temp;

		temp.numerator_ = numerator_ * frac.denominator_;
		temp.denominator_ = denominator_ * frac.numerator_;
		temp.reduce();

		return temp;
	}

	Fraction& operator ++ ()
	{
		
		this->numerator_ = numerator_ + denominator_;

		reduce();

		return *this;

	}

	Fraction operator ++ (int)
	{
		
		Fraction temp = *this;
		++(*this);

		temp.reduce();

		return temp;

	}

	Fraction& operator -- ()
	{

		this->numerator_ = numerator_ - denominator_;

		reduce();

		return *this;

	}

	Fraction operator -- (int)
	{

		Fraction temp = *this;
		--(*this);

		temp.reduce();

		return temp;

	}

};



int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Fraction f1;
	Fraction f2;

	std::cin >> f1;
	std::cin >> f2;

	std::cout << f1 << " + " << f2 << " = " << f1 + f2;
	std::cout << f1 - f2;
	std::cout << f1 * f2;
	std::cout << f1 / f2;

	std::cout << ++f1 * f2;
	std::cout << f1;
	
	std::cout << f1-- * f2;
	std::cout << f1;
	

	std::cout << "\n";
	system("pause");
	return 0;
}