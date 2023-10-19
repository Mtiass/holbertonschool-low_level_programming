#include "main.h"

/**
 * print_rev - Entry point
 * Description:"In README.md file"
 * @s:"pointer type char"
 * Return:
 */
void print_rev(char *s)
{
	int revst;
	
	revst = _strlen(s);
	while (revst >= 0)
	{
		_putchar(s[revst]);
		revst--;
	}
	_putchar('\n');
}
