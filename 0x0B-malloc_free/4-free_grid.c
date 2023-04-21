#include "main.h"

/**
  * free_grid - Frees memory allocated by malloc
  * @grid: Pointer to a pointer of arrays
  * @height: Array dimension
  */
void free_grid(int **grid, int height)
{
	int i;

	free(grid);
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
