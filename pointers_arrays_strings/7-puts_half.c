#include "main.h"

/**
 * puts_half - Entry point
 * Description:"In README.md file."
 * @str:"pointer to be checked"
 * Return:
 */
void puts_half(char *str)
{
	int stle;
	int lest;

	stle = 0;
	while (str[stle] != '\0')
	{
		stle++;
	}
	if (stle % 2 == 0)
	{
		lest = stle / 2;
	}
	else
	{
		lest = ((stle - 1) / 2) + 1;
	}
	while (str[lest] != '\0')
	{
		_putchar(str[lest]);
		lest++;
	}
	_putchar('\n');
}
