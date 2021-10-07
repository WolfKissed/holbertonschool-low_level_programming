#include "main.h"
/**
 * more_numbers - prints numbers ten times
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i;
	int x = 0;

while (x < 10)
{
for (i = 0; i <= 14; i++)
{
if (i > 9)
{
	_putchar('1');
}
	_putchar((i % 10) + 48);
}
	_putchar('\n');
	x++;
}
}
