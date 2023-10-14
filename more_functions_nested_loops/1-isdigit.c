#include "main.h"
/**
 * _isdigit - Entry point
 * Description:"checks for a digit (0 through 9)"
 * @c: int to be checked
 * Return: 1
 */
int _isdigit(int c)
{
	while (c >= 0 && c <= 9)
	{
		_putchar(1);
		return (1);
	}
	return (0);
}
