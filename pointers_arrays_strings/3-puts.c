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

	for (st = 0; str[st] =! '\0'; st++)
	{
		_putchar(st);
	}
	_putchar('\n');
}
