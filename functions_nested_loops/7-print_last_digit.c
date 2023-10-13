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
	int ld;

	ld = x % 10;
	if (x >= 0)
	{
		_putchar(ld);
		return (ld);
	}
	else
	{
		_putchar(ld * -1);
		return (ld * -1);
	}
}
