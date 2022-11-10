#include <stdlib.h>
/**
 * free_grid - free a two dimentional grid created in function alloc_grid
 *
 * @grid: grid to free
 * @height: rows in grid
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
