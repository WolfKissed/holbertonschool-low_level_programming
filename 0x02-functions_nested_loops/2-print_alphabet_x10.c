#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lower case ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int x = 0;

	while (x < 10)
	{

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
	x++;
	}
}
