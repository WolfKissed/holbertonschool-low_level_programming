#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: char
 * Return: 0
 */
void print_rev(char *s)
{
int i = strlen(s) - 1;

while (i > -1)
{
printf(s[i]);
i--;
}
printf('\n');
}
