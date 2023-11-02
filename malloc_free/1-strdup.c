#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * _strdup - Entry point
 * Description: function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter.
 * @str: string to be copied.
 * Return: the destination string.
 */
char *_strdup(char *str)
{
	char *strdes;

	if (str == NULL)
		return (NULL);
	strdes = malloc(strlen(str) * sizeof(char) + 1);
	if (strdes == NULL)
		return (NULL);
	strcpy(strdes, str);
	return (strdes);
}
