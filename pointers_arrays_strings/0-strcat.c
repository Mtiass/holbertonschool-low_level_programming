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
	int con;

	con = 0;
	while (dest[con] != '\0')
	{
		con++;
	}
	for (con = 0; src[con] != '\0'; con++)
	{
		dest[con] = src[con];
	}
	dest[con] = '\0';
	return (dest);
}
