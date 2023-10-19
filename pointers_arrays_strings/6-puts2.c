#include "main.h"

/**
 * _puts - Entry point
 * Descritpion:"In README.md"
 * @str:"pointer variable type char."
 * Return:
 */
void _puts(char *str)
{
	int st;

	st = 0;
	while (str[st] != '\0')
	{
		if (str[st] != '\0')
		{
			st++;
		}
		_putchar(str[st]);
                st++;
	}
	_putchar('\n');
}
