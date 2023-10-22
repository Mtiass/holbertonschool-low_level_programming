#include "main.h"

/**
 * _strcmp - Entry point
 * Description:"In README.md file"
 * @s1:char pointer as param1
 * @s2:char pointer as param2
 * Return:int value.
 */
int _strcmp(char *s1, char *s2)
{
	 int con, con2;

	con = 0;
	while (s1[con] != '\0')
	{
		con++;
	}
	con2 = 0;
	while (s2[con2] != '\0')
	{
		con2++;
	}
	if (con == con2)
	{
		return (0);
	}
	else if (con > con2)
	{
		return (15);
	}
	else
	{
		return (-15);
	}
}
