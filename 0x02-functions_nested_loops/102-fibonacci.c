#include<stdio.h>

/**
 * main - check the code.
 * Return: 0
 */
int main (void)
{
int a, i = 0, b = 1, c = 0;

while(i < 48)
{
	a = b + c;
	b = a - 1;
	c = a - 2;
	printf("%d, ", a);
	i++;
}
return (0);
}
