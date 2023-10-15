#include "main.h"

/**
 * print_diagonal - Entry point
 * Description:"function that draws a diagonal
 * line on the terminal."
 * @n: int to be checked.
 * Return:
 */
void print_diagonal(int n)
{
	int m, s;

	for (m = 0; m < n; m++)
	{
		for (s = 0; s < n; s++)
		{
			_putchar(' ');
		}
		_putchar(92);
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
