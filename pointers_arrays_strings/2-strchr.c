#include "main.h"

/**
 * _strchr - Entry point
 * Description:"function that locates a character
 * in a string."
 * @s: string to be checked.
 * @c: char delimiter.
 * Return: string initialized by c.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return ('\0');
}
