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
	while (con2 < n && src[con2] != '\0')
	{
		dest[con] = src[con2];
		con++;
		con2++;
	}
	dest[con] = '\0';
	return (dest);
}
