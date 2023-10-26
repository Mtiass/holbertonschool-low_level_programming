#include "main.h"
/**
 * _pow_recursion - Entry point
 * Description:"function that returns the value
 * of x raised to the power of y."
 * @x:integer to be returned once is raised to
 * the power of y.
 * @y:integer to power the value of x.
 * Return: an integer, result of x^y.
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
