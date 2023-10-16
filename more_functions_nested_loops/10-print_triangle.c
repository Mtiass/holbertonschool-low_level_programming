#include "main.h"

/**
 * print_triangle - Entry point
 * Description: function that prints a triangle,
 * followed by a new line.
 * @size: int to be checked
 * Return:
 */
void print_triangle(int size)
{
	int a, b;

	for (a = 0; a < size; a++)
	{
		for (b = 0; b < a; b--)
		{
			_putchar(' ');
		}
		for (b = a; b < size; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}

