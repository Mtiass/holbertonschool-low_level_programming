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

	res = 0;
	sign = 1;
	while (s[con] == '+' || s[con] == '-')
	{
		if (s[con] == '-')
		{
			sign = -sign;
		}
		con++;
	}
	for (con = 0; s[con] != '\0'; con++)
	{
		if (s[con] >= '0' && s[con] <= '9')
		{
			res = res * 10 + (s[con] - '0');
		}
		else
		{
			break;
		}
	}
	return (res * sign);
}
