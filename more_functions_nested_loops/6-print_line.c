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
	if (n > 0)
	{
		_putchar(strlin);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
