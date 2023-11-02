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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	s3 = malloc((strlen(s1) + strlen(s2)) * sizeof(char) + 1);
	s3 = strcat(s1, s2);
	return (s3);
}
