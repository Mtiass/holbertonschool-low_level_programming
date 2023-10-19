#include "main.h"

/**
 * puts_half - Entry point
 * Description:"In README.md file."
 * @str:
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
	else ((stle % 2) < 0)
	{
		lest = ((stle - 1) / 2);
	}
	while (str[lest] != '\0')
	{
		_putchar(lest);
		lest++;
	}
	_putchar('\n');
}
