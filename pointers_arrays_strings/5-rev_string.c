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
	int prnst;
	int revst;
	
	prnst = 0;
	revst = strlen(s) - 1;
	while (s[prnst] != '\0')
	{
		_putchar(s[prnst]);
		prnst++;
	}
	_putchar('\n');
	while (revst >= 0)
	{
		_putchar(s[revst]);
		revst--;
	}
	_putchar('\n');
}
