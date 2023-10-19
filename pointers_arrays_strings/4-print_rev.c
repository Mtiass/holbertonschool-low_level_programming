#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * print_rev - Entry point
 * Description:"In README.md file"
 * @s:"pointer type char"
 * Return:
 */
void print_rev(char *s)
{
	int revst;
	
	revst = strlen(s);
	while (revst >= 0)
	{
		_putchar(s[revst]);
		revst--;
	}
	_putchar('\n');
}
