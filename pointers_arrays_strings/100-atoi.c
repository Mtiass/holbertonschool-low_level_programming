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
	int sign;
	unsigned int res;

	res = 0;
	sign = 1;
	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
			s++;
		}
		else if (*s == '+')
		{
			s++;
		}
		if (*s >= '0' && *s <= '9')
		{
			res = (res * 10) + (*s - '0');
			s++;
		}
		else
		{
			s++;
		}
	}
	return (res * sign);
}
