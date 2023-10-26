#include "main.h"
/**
 * _print_rev_recursion - Entry point
 * Descritpion:"function that prints a string in
 * reverse."
 * @s: string to be reversed.
 * Return: void.
 */
void _print_rev_recursion(char *s)
{
	int con = 0;

	if (*s != '\0')
	{
		s++;
	}
	s--;
	if (*s >= 0)
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
