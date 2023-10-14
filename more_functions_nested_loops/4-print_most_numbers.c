#include "main.h"

/**
 * print_most_numbers - Entry point
 * Description:"prints the numbers, from 0 to 9,
 * followed by a new line."
 * Return:
 */
void print_most_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		while (n != 2 && n != 4)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
