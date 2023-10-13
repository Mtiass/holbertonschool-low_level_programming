#include "main.h"

/**
 * times_table - Entry point
 * Description: "prints the 9 times
 * table, starting with 0."
 * @void:
 *
 * Return:
 */
void times_table(void)
{
	int A, B;

	for (A = 0; A <= 9; A++)
	{
		for (B = 0; B <= 9; B++)
		{
			if (A * B / 10 == 0 && B != 0)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(((A * B) / 10) + '0');
			}
			_putchar(((A * B) % 10) + '0');
			if (B != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
	_putchar('\n');
	}
}
