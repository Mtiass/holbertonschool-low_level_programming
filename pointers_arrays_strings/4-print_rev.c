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

	for (revst = s['\0']; revst >= s[0]; revst--)
	{
		if (s[revst] != '\0')
		{
		_putchar(s[revst]);
		}
	}
	_putchar('\n');
}
