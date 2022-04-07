#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees a 2-dimensional array of integers.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 */

void free_grid(int **grid, int height)
{
Int I;
for (i = 0; i < height; i++)
		free(grid[i]);
free(grid);
}
