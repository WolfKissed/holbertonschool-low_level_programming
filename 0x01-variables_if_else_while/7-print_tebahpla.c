#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Prints the alphabet from z to a
 *
 * Return: 0
 */
int main(void)
{
	char i = 'z';


	while (i >= 'a')
{
	int lower_i = tolower(i);

	putchar(lower_i);
	i--;
}
	putchar('\n');

	return (0);
}
