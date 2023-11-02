#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * str_concat - Enty point
 * Description:function that concatenates two strings.
 * @s1:string source
 * @s2:string to be concatenated to s1
 * Return: string result of cocatenation of s1 and s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;

	s3 = malloc(strlen(s1) + strlen(s2) + 1);
	if (s3 == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(s3, s1);
	else if (s2 != NULL)
		strcat(s3, s2);
	if (s1 == NULL && s2 != NULL)
		strcpy(s3, s2);
	return (s3);
}
