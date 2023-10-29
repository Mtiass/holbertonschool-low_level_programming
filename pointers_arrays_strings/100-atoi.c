#include "main.h"
/**
 * _atoi - Entry point
 * Description:function that convert a string to
 * an integer.
 * @s:string to be converted to string.
 * Return: an integer.
 */
int _atoi(char *s)
{
	int con, res, sign;

	con = 0;
	res = 0;
	sign = 1;
	if (s[0] == '-')
	{
		sign = -1;
		s++;
	}
	else if (s[0] == '+')
	{
		s++;
	}
	for (; s[con] != '\0'; con ++)
	{
		if (s[con] >= '0' && s[con] <= '9')
		{
			res = res * 10 + (s[con] - '0');
		}
		else
		{
			return (0);
		}
	}
	return res * sign;
}
