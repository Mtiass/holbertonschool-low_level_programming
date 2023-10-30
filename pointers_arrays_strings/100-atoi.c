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
	int con, res, sign, con2;

	con = 0;
	res = 0;
	sign = 1;
	con2 = 0;
	while (s[con] == '-' || s[con] == '+')
	{
		if (s[con] == '-')
		{
			sign *= -1;
		}
		con++;
	}
	for (; s[con] != '\0'; con++)
	{
		if (s[con] >= '0' && s[con] <= '9')
		{
			res = res * 10 + (s[con] - '0');
			con2++;
		}
		else
		{
			break;
		}
	}
	if (con2 == 0)
	{
		return (0);
	}
	return (res * sign);
}
