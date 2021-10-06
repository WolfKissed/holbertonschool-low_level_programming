#include<stdio.h>

/**
 * main - check the code.
 * Return: 0
 */
int main (void)
{
int b = 1, c = 0,a,i;

for (i = 1; i < 52; i++)
{
	a = b + c;
	printf("%d, ", a);
	c = b;
	b = a;
}
return (0);
}
