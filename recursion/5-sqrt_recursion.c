#include "main.h"
/**
 * srec - Entry point
 * Description:"function that checks if an
 * integer is the natural square root of a
 * number."
 * @n:"number to be checked."
 * @try: "integer that multiplies itself
 * and checks if is the natural square root of n."
 * Return: an integer.
 */
int srec(int n, int try)
{
	if ((try * try) == n)
	{
		return (try);
	}
	else if ((try * try) > n)
	{
		return (-1);
	}
	return (srec(n, try + 1));
}
/**
 * _sqrt_recursion - Entry point
 * Description:"function that returns the
 * natural square root of a number."
 * @n: integer.
 * Return: an integer.
 */
int _sqrt_recursion(int n)
{
	return (srec(n, 1));
}
