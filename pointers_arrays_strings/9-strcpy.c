#include "main.h"

/**
 * *_strcpy - Entry point
 * Description:"In README.md file"
 * @dest:pointer char type.
 * @src:pointer char type
 * Return: type char.
 */
char *_strcpy(char *dest, char *src)
{
	int con;

	for (con = 0; src[con] != '\0'; con++)
	{
		dest[con] = src[con];
	}
	dest[con] = '\0';
	return (dest);
}
