#include<stdio.h>

/**
 * main - check the code.
 * Return: 0
 */
int main(void)
{
int i;
long int b = 1, c = 0, a;

for (i = 1; i < 50; i++)
{
	a = b + c;
	printf("%ld, ", a);
	c = b;
	b = a;
}
for (i =50; i < 51; i++)
{
	a = b + c;
	printf("%ld ", a);
}
return (0);
}
