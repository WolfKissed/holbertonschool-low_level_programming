#include "main.h"
/**
 * reverse_array - reverses array
 * @a: int
 * @n: int
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int tmp, i = 0, j = n - 1;

while (i <= j)
{
tmp = *(a + i);
*(a + i) = *(a + j);
*(a + j) = tmp;
i++;
j--;
}
}
