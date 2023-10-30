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
	int sign, con;
	unsigned int res;

	con = 0;
	res = 0;
	sign = 1;
	while (s[con])
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		while ((s[con] >= '0' && s[con] <= '9') || s[con] == '-' || s[con] == '+')
		{
			res = res * 10 + (*s - '0');
			con++;
		}
		con++;
	}
	res *= sign;
	return (res);
}
