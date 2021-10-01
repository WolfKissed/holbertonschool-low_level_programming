#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Prints the alphabets in lower case
 * then in upper case
 *
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
{
	int lower_i = tolower(i);

	putchar(lower_i);
}
	for (i = 'A'; i <= 'Z'; i++)
{

	putchar(i);
}

	putchar('\n');

	return (0);
}
