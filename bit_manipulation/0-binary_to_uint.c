#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 * Return: the converted number, or 0 if there is one or more chars in the
 * string b that is not 0 or 1 and 0 if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int con = 0, num = 0;

	if (b == NULL)
		return (0);
	while (b[con] == '0' || b[con] == '1')
	{
		num <<= 1;
		num += b[con] - '0';
		con++;
	}
	if (b[con] != '\0')
		return (0);

	return (num);
}
