#include "main.h"

/**
 * _puts - Entry point
 * Descritpion:"In README.md"
 * @str
 * Return:
 */
void _puts(char *str)
{
	int st;
	
	st = 0;
	while (str[st] != '\0')
	{
		_putchar("%c", st);
		st++;
	}
	_putchar('\n');
}
