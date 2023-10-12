#include "main.h"

/**
 * print_sign - Entry point
 * Description: function that prints the
 * sign of a number.
 * @n: int to be checked
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		print_sign(n);
		return (1);
	}
	else if (n < 0)
	{
		print_sign(n);
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
