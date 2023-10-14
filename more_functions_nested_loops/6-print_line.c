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
	char strlin = 95;

	while (n > 0)
	{
		_putchar(strlin * n);
		_putchar('\n');
	}
	_putchar('\n');
}
