#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Generates a random number then print
 * the last digit of the number and checks if
 * it's less than 6 or greater than 5 or 0
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int lg;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lg = n % 10;
	if (lg > 5)
	printf("Last digit of %d is %d and is greater than 5\n", n, lg);
	else if (lg == 0)
	printf("Last digit of %d is %d and is 0\n", n, lg);
	else
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lg);

	return (0);
}
