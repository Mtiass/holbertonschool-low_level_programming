#include "main.h"
/**
 * _isdigit - Entry point
 * Description:"checks for a digit (0 through 9)"
 * @c: int to be checked
 * Return: 1
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
