#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case ten times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_alphabet_x10();
    return (0);
}
