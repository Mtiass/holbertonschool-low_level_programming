#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * Description:"In README.md file."
 * @a:variable pointer.
 * @n:viariable type int
 * Return:
 */
void print_array(int *a, int n)
{
	for (n = 0; n != '\0'; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("\n");
}
