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

	for (s[revst] = '\0'; s[revst] >= 0; revst--)
	{
		_putchar(s[revst]);
	}
	_putchar('\n');
}
