#include "main.h"
/**
 * _memcpy - Entry point
 * Description:"function that copies memory area"
 * @dest: string to be returned
 * @src: string to be copied
 * @n: unsigned int limiter
 * Return: a string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int con;

	con = 0;
	while (con < n && src[con] != '\0')
	{
		dest[con] = src[con];
		con++;
	}
	while (con < n)
	{
		dest[con] = '\0';
		con++;
	}
	return (dest);
}
