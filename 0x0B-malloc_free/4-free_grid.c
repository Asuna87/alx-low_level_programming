#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D grid previously created by alloc_grid function
* @grid: pointer to the 2D grid
* @height: height of the grid
*
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
int i;

/* Free each row first */
for (i = 0; i < height; i++)
{
free(grid[i]);
}

/* Free the pointer to the rows */
free(grid);
}

