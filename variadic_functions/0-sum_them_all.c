#include "variadic_functions.h"
/**
 * sum_them_all - Entry point
 * Description:variadic function that returns the sum of all its parameters
 * @n: constant un integer which is the number of parameters to add.
 * Return: an integer.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int con, sum;
	va_list al;

	va_start(al, n);
	sum = 0;
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (con = 0; con < n; con++)
			sum += va_arg(al, unsigned int);
	}
	va_end(al);
	return (sum);
}
