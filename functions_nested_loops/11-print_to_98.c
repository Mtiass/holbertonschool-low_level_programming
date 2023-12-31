#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Entry point
 * Description:"prints all natural numbers
 * from n to 98, followed by a new line."
 * @n: variable.
 *
 * Return:
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}
	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
