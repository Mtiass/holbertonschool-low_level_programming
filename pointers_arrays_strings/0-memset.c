#include "main.h"

/**
 * _memset - Entry point
 * Description:"function that fills memory
 * with a constant byte."
 * @s: string to be converted.
 * @b: char var.
 * @n: unsigned int number limit
 * Return: *s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int con = 0;

	for (; con < n; con++)
	{
		s[con] = b;
	}
	return (s);
}
