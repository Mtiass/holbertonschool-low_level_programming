#include "main.h"

/**
 * puts2 - Entry point
 * Descritpion:"In README.md"
 * @str:"pointer variable type char."
 * Return:
 */
void puts2(char *str)
{
	int st;

	st = 0;
	while (str[st] != '\0')
	{
		_putchar(str[st]);
		st++;
		if (str[st] != '\0')
		{
			st++;
		}
	}
	_putchar('\n');
}
