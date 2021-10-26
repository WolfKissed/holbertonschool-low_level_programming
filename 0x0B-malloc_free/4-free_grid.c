#include "main.h"
/**
 * free_grid - Frees a 2 dimensional grid
 * @grid: int
 * @height: int
 * Return: 0
 */
void free_grid(int **grid, int height)
{
int i = 0;

for (; i < height; i++)
free(grid[i]);
free(grid);
}
