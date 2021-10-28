#include "main.h"
/**
 * malloc_checked - Allocates memory
 * @b: unsigned int
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
void *a = malloc(b);

if (a == NULL)
	exit(98);
return (a);
}
