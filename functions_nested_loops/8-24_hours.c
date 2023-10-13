#include "main.h"

/**
 * jack_bauer - Entry point
 * Description: "prints every minute of the day
 * of Jack Bauer, starting from 00:00 to 23:59."
 * @void:
 *
 * Return:
 */
void jack_bauer(void)
{
	int h1, h2;

	h1 = 0;
	h2 = 0;
	for (h1 = 0; h1 <= 2; h1++)
	{
		_putchar(h1 + '0');
		for (h2 = 0; h2 <= 3; h2++)
		{
			_putchar(h2 + '0');
		}
		_putchar(':');
	}
}
