#include "main.h"

/**
 * _strncpy - Entry point
 * Description:"In README.md file."
 * @dest:first pointer param.
 * @src:second pointer param.
 * @n:variable int type.
 * Return: pointer char type.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int con;

	con = 0;
	while (con < n)
	{
		dest[con] = src[con];
		con++;
	}
	dest[con] = '\0';
	return (dest);
}
