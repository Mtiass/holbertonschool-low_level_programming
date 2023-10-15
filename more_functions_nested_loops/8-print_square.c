#include "main.h"

/**
 * print_square - Entry point
 * Description:"function that prints a square,
 * followed by a new line."
 * @size: int to be checked
 * Return:
 */
void print_square(int size)
{
	int m, n;

	m = n = 0;
	for (; m < size; m++)
	{
		while (n < size)
		{
			_putchar(35);
			n++;
		}	
		_putchar(35);
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
