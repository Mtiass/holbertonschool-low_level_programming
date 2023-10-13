#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description:"prints the last digit
 * of a number."
 * @x: int to be checked
 *
 * Return: ld.
 */
int print_last_digit(int x)
{
	int ld, lnd;

	ld = x % 10;
	lnd = (ld * -1);
	if (x >= 0)
	{
		_putchar(ld + '0');
		return (ld);
	}
	else
	{
		_putchar(lnd + '0');
		return (ld * -1);
	}
}
