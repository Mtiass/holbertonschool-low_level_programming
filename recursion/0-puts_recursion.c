#include "main.h"
/**
 *  _puts_recursion - Entry point
 *  Description:"function that prints a string,
 *  followed by a new line."
 *  @s: string to be printed.
 *  Return: void.
 */
void _puts_recursion(char *s)
{
	int con1 = 0;

	while (s[con1] != '\0')
	{
		_putchar(s[con1]);
		con1++;
	}
}
