#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Prints the alphabets in lower case except e & q
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
{
	if (i == 'q' || i == 'e')
	continue;

	else
	putchar(i);
}
	putchar('\n');

	return (0);
}
