#include "main.h"

/**
 * print_rev - Entry point
 * Description:"In README.md file"
 * @s:"pointer type char"
 * Return:
 */
void print_rev(char *s)
{
	int stle;

	stle = 0;
	while (s[stle] != '\0')
	{
		stle++;
	}
	stle -= 1;
	while (s[stle] >= 0)
	{
		_putchar(s[stle]);
		stle--;
	}
	_putchar('\n');
}
