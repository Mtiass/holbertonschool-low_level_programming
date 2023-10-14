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
	char strlin = '_';
	char nstrlin = (strlin * n);

	if (n > 0)
	{
		_putchar(nstrlin);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
