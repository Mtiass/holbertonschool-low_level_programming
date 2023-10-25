#include "main.h"
/**
 * _strpbrk - Entry point
 * Description:"function that searches a string
 * for any of a set of bytes."
 * @s:string to find occurrence of bytes.
 * @accept:string to be searched for occurrences
 * Return: a char.
 */
char *_strpbrk(char *s, char *accept)
{
	int con1, c2;

	for (con1 = 0; con1 != '\0'; con1++)
	{
		for (c2 = 0; c2 != '\0'; c2++)
		{
			if (s[con1] == accept[c2])
			{
				return (s);
			}
			else 
			{
				return ('\0');
			}
		}
	}
}
