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

	for (con = 0; con < n; con++)
	{
		dest[con] = src[con];
	}
	dest[con] = '\0';
	return (dest);
}
