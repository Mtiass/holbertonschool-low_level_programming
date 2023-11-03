#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * string_nconcat - Entry point
 * Description:function that concatenates two strings.
 * @s1: string 1 to be concatenated
 * @s2: string 2 to be concatenated to s1
 * @n: number in bytes of s2 to be concatenated
 * Return: char string(result of concat s1 with s2(n bytes).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc(strlen(s1) + n + 1);
	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	con = 0;
	while (s2[con] != '\0')
		con++;
	if (con <= n)
		strcat(s3, s2);
	else
	{
		strncat(s3, s2, n);
	}
	return (s3);
}
