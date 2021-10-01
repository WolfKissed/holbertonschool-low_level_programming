#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Prints the numbers of base 16 in lowercase
 *
 * Return: 0
 */
int main(void)
{
	char ch;
	int i = 0;

	for (; i < 10; i++)
	putchar(i + '0');
	for (ch = 'a' ; ch <= 'f' ; ch++)
	putchar(ch);
	putchar('\n');
	return (0);
}
