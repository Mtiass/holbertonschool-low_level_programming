#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Entry point
 * Description:function that returns a pointer to a 2
 * dimensional array of integers.
 * @width:witdh of the array(columns)
 * @height:height of the array(rows)
 * Return: a 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int **intar;
	int con;

	if (width <= 0 || height <= 0)
		return (NULL);
	intar = malloc(height * sizeof(int *));
	if (intar == NULL)
		return (NULL);
	for (con = 0; con < height; con++)
	{
		intar[con] = malloc(width * sizeof(int));
		if (intar[con] == NULL)
		{
			free(intar);
			return (NULL);
		}
	}
	return (intar);
}
