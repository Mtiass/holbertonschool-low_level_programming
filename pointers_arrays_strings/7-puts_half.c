#include "main.h"

/**
 * puts_half - Entry point
 * Description:"In README.md file."
 * @str:
 * Return:
 */
void puts_half(char *str)
{
	int lest;

	lest = _strlen(str);

	while (lest % 2 == 0)
	{
		_putchar(lest / 2);
		lest++;
	}
	while (lest % 2 != 0)
	{
		_putchar((lest - 1) / 2);
		lest++;
	}
	_putchar('\n');
}
