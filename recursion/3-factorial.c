#include "main.h"
/**
 * factorial - Entry point
 * Description:"function that returns the
 * factorial of a given number."
 * @n: integer to factored.
 * Return: an integer.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
