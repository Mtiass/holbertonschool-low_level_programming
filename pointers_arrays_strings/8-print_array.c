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
	int h;

	for (h = 0; h < n; h++)
	{
		printf("%d", a[h]);
		if (h < n)
		{
			printf(", ");
		}
	}
	printf("\n");
}
