#include "main.h"

/**
 * print_last_digit - check the code.
 * @n: int
 * Return: Always 0.
 *
 */
int print_last_digit(int n)
{
long c = n;
		if (c < 0)
{
		c=-c;
}
		if (c > 10)
{
	c %= 10;
}
		if ((c < 10) && (c > 0))
{
	_putchar(c + '0');
return (c);
}
	_putchar('0');
return (0);
}
