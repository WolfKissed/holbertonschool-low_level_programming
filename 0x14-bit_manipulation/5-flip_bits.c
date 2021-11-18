#include "main.h"
/**
 * flip_bits - flips bits
 * @n: long int
 * @m: long int
 * Return: 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i = 0;
unsigned long int x;
x = n ^ m;
while (x > 0)
{
i++;
x &= (x - 1);
}
return (i);
}
