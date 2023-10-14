#include "main.h"

/**
 * print_line - Entry point
 * Description: function that draws a straight
 * line in the terminal.
 * @n: int to be checked.
 * Return:
 */
void print_line(int n)
{
	for (int m = 1; m < n; m++)
	{
		if (n > 0)
		{
			_putchar('_');
			_putchar('\n');
		}
		else
		{	
			_putchar('\n');
		}
	}
}
