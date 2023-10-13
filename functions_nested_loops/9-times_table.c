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
			_putchar(A * B + '0');
			_putchar(',');
			_putchar(' ');
		}
	_putchar('\n');
	}
}
