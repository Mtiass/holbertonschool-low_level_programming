#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * rev_string - Entry point
 * Description:"In README.md file"
 * @s:"pointer type char"
 * Return:
 */
void rev_string(char *s)
{
	int revst;

	revst = strlen(s) - 1;
	while (revst >= 0)
	{
		_putchar(s[revst]);
	}
	_putchar('\n');
}
