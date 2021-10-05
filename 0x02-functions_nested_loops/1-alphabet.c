#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: void
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}
/**
 * main - prints the alphabet
 *
 * Return: 0
 */
int main(void)
{
	print_alphabet();
	return (0);
}
