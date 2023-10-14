#include "main.h"

/**
 * more_numbers - Entry point
 * Description:"prints 10 times the numbers, from
 * 0 to 14, followed by a new line."
 * Return:
 */
void more_numbers(void)
{
	int newl, num;

	newl = 0;
	while (newl < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
		_putchar('\n');
		newl++;
	}
}
