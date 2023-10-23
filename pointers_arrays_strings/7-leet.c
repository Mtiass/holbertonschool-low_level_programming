#include "main.h"

/**
 * leet - Entry point
 * Description:"Write a function that encodes
 * a string into 1337."
 * @str: char pointer as parameter.
 * Return: char pointer.
 */
char *leet(char *str)
{
	int con, con2;
	char a[10];
       	int b[10];

	a[10] = {a, A, e, E, o, O, t, T, l, L};
	b[10] = {4, 4, 3, 3, 0, 0, 7, 7, 1, 1};
	for (con = 0; str[con] != '\0'; con++)
	{
		for (con2 = 0; a[con2] < 10; con2++)
		{
			if (con == con2)
			{
				a[con2] = b[con2];
				str[con] = a[con2];
			}
		}
	}
	return (str);
}	
