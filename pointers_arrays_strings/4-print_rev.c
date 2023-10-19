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

	for (revst = s['\0']; revst >= 0; revst--)
	{
		while (s[revst] != '\0')
		{
		_putchar(s[revst] - 1);
		revst--;
		}
	}
	_putchar('\n');
}
