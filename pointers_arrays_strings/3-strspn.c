#include "main.h"

/**
 * _strspn - Entry point
 * Description:"function that gets the length of
 * a prefix substring."
 * @s: string to be cut
 * @accept: substring
 * Return: an unsigned int.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int con1, con2;

	for (con1 = 0; s[con1] != '\0'; con1++)
	{
		for (con2 = 0; accept[con2] != '\0'; con2++)
		{
			if (*s == *accept)
			{
				len++;
			}
		}
	}
	return (len);
}
