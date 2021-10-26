#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int
 * @height: int
 * Return: 0
 */
int **alloc_grid(int width, int height)
{
int i, j, **p;
if (width <= 0 || height <= 0)
return (NULL);
p = (int **) malloc(height * sizeof(int *));
if (p == NULL)
return (NULL);
for (i = 0; i < height; i++)
{
p[i] = (int *) malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
free(p[j]);
free(p);
return (NULL);
}
}
for (i = 0; i < height; i++)
for (j = 0; j < width; j++)
p[i][j] = 0;
return (p);
}
