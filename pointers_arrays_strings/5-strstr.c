#include "main.h"
/**
 * _strstr - Entry point
 * Description:"function that locates a
 * substring."
 * @haystack:string to be searched.
 * @needle:substring to find occurrence.
 * Return: char string.
 */
char *_strstr(char *haystack, char *needle)
{
	int c1, c2;

	for (c1 = 0; haystack[c1] != '\0'; c1++)
	{
		for (c2 = 0; needle[c2] != '\0'; c2++)
		{
			if (haystack[c1 + c2] == needle[c2])
			{
				return (haystack);
			}
		}
	}
	return ('\0');
}
