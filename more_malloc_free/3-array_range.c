#include <stdlib.h>
#include "main.h"
/**
 * array_range - Entry point
 * Description:function that creates an array of integers.
 * @min: integer which initialiazes the array.
 * @max: integer where the array finishes.
 * Return: a pointer to an int array.
 */
int *array_range(int min, int max)
{
	int *intar;
	int con = min;

	if (min > max)
		return (NULL);
	intar = malloc((max - min + 1)  * sizeof(int));
	if (intar == NULL)
	{
		free(intar);
		return (NULL);
	}
	while (con <= max)
	{
		intar[con - min] = con;
		con++;
	}
	return (intar);
}
