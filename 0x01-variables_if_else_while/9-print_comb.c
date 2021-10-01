#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Prints the numbers from 0 to 10, seperated by commas
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
{
		putchar(i + '0');
	if (i != 9)
{
	    putchar (',');
	putchar (' ');
}
}
	putchar('\n');
	return (0);
}
