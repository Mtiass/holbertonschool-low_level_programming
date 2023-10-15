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
	int m;

	for (m = 0; m < n; m++)
	{
		if (n > 0 && n == 1)
		{
			_putchar(92);
			_putchar('\n');
		}
		else if (n > 2)
		{
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
