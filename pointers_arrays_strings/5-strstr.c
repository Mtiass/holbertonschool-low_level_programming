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
	int c1 = 0;
	int c2 = 0;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (haystack[c1] != '\0')
	{
		if (haystack[c1] != needle[c2])
		{
			c1++;
		}
		else
		{
			while (needle[c2] == haystack[c1])
			{
				c1++;
				c2++;
				if (needle[c2] == '\0')
				{
					return (haystack + (c1 - c2));
				}
			}
			c2 = 0;
		}
	}
	return ('\0');
}
