#include <stdlib.h>
#include "main.h"
/**
 * free_grid - Entry point
 * Description:"function that frees a 2 dimensional grid previously
 * created by your alloc_grid function."
 * @grid: 2 dimensional array.
 * @height: height of the array(rows).
 * Return:nothing.
 */
void free_grid(int **grid, int height)
{
	int con;

	for (con = 0; con < height; con++)
	{
		if (grid[con] != NULL)
			free(grid[con]);
	}
	free(grid);
}
