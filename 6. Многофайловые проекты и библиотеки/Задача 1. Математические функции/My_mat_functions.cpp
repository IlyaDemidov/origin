#include "My_mat_functions.h"

double my_sum(double x, double y)
{
	return x + y;
}

double my_subtraction(double x, double y)
{
	return x - y;
}

double my_multiplication(double x, double y)
{
	return x * y;
}

double my_division(double x, double y)
{
	return x / y;
}

double my_exponentiation(double x, double y)
{
	for (size_t i = 1, j = x; i < y; i++)
	{
		x *= j;
	}

	return x;
}