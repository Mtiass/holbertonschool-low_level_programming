#include "main.h"

/**
 * _strlen - Entry point
 * Description:"In README.md"
 * @s:"var type char."
 * Return: int
 */
int _strlen(char *s)
{
	int stle;

	while (s[stle] != s[\0])
	{
		s[0] = stle;
		stle++;
	}
	return (stle);
}
