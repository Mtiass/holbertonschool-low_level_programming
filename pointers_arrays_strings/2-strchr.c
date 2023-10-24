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
	int con;
	int con2;

	con2 = 0;
	for (con = 0; s[con] < c; con++)
	{
		while (con2 >= c && s[con2] != '\0')	
		{
			s[con2] = c;
			con2++;
		}
	}
	return (s);
}
