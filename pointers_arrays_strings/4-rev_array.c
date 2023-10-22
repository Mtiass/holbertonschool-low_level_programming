#include "main.h"

/**
 * reverse_array - Entry point
 * Description:"In README.md file"
 * @a:int pointer.
 * @n:int variable.
 * Return:
 */
void reverse_array(int *a, int n)
{
	int posin, posfin;
	char cp;

	posin = 0;
	posfin = n - 1;
	while (posin < posfin)
	{
		cp = a[posin];
		a[posin] = a[posfin];
		a[posfin] = cp;
		posin++;
		posfin--:
	}
}
