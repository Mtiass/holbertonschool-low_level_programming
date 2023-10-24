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
	unsigned int con = 0;

	while (accept[con] != '\0')
	{
		con++;
	}
	return (con);
}
