#include "main.h"
/**
 * is_prime_number - Entry point
 * Description:function that returns 1 if the
 * input integer is a prime number, otherwise
 * return 0.
 * @n:integer.
 * Return: 1 if true 0 if false.
 */
int is_prime_number(int n)
{
	if (((n % 2) != 0) && n > 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
