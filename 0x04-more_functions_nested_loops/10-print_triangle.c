#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: int
 * Return: 0
 */
void print_triangle(int size)
{
if (size > 0)
{
int i, j;
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
if ((j + i) <= size)
	_putchar(' ');
else
	_putchar('#');
}
	_putchar('\n');
}
}
else
{
	_putchar('\n');
}
}
