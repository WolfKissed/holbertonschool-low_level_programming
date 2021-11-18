#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: char
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int n = 0, x = 1;
int i;

if (!b)
return (0);
for (i = 0; b[i];)
i++;
for (i -= 1; i >= 0; i--)
{
if (b[i] != '0' && b[i] != '1')
return (0);
	n += (b[i] - '0') * x;
	x *= 2;
}
return (n);
}
