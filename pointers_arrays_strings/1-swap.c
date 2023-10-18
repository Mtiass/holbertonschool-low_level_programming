#include "main.h"

/**
 * swap_int - Entry point
 * Description:"In README.md"
 * @a:"first parameter."
 * @b:"second parameter."
 * Return:
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
