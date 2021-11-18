#include "main.h"
/**
 * get_bit - Returns the value of a bit
 * @n: long int
 * @index: long int
 * Return: 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (sizeof(unsigned long int) * 8 < index)
return (-1);
n >>= index;
if ((n & 1) == 1)
return (1);
return (0);
}
