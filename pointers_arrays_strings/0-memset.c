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
	int con;

	for (con = 0; con < n; con++)
	{
		*s = b;
	}
	return (s);
}
