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

	strdes = malloc(strlen(str) * sizeof(char));
	strcpy(strdes, str);
	if (str == NULL)
		return (NULL);
	free(strdes);
	return (strdes);
}
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	return (0);
}
