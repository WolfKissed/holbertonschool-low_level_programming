#include "main.h"
/**
 * swap_int - swaps two integers
 * @a: int
 * @b: int
 * Return: 0
 */
void swap_int(int *a, int *b)
{
*a = *a + *b;
*b = *a - *b;
*a = *a - *b;
}
