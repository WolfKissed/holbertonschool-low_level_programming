#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Prints the numbers from 0 to 10
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;

	for (; i < 10; i++)
	putchar(i + '0');
	putchar('\n');
	return (0);
}
