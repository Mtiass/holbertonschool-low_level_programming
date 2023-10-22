#include "main.h"

/**
 * _strcat - Entry point
 * Descritpion:"In README.md"
 * @dest:"pointer variable type char."
 * @src:"pointer variable type char"
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	int con, con2;

	con = 0;
	while (dest[con] != '\0')
	{
		con++;
	}
	for (con2 = 0; src[con2] != '\0'; con2++)
	{
		dest[con] = src[con2];
		con++;
	}
	dest[con + 1] = '\0';
	return (dest);
}
