#include "main.h"
/**
 * main - print alphabet
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: 0
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}
int main(void)
{
	print_alphabet();
	return (0);
}
