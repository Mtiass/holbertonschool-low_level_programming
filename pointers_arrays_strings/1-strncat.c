#include "main.h"

/**
 * _strncat - Entry point
 * Description:"In README.md file"
 * @dest:"pointer param1"
 * @src:"pointer parm 2"
 * @n:var int
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int con, con2;

	con = 0;
	while (dest[con] != '\0')
	{
		con++;
	}
	con2 = 0;
	while (src[con2] < n && src[con2] != '\0')
	{
		dest[con] = src[con2];
		con++;
	}
	dest[con + 1] = '\0';
	return (dest);
}
