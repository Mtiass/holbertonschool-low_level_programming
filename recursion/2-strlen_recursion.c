#include "main.h"
/**
 * _strlen_recursion - Entry point
 * Description:"function that returns the
 * length of a string."
 * @s: string to search it's lenght.
 * Return: an integer.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		return (_strlen_recursion(s) + 1);
	}
	else
	{
		return (0);
	}
}
