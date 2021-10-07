#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: char
 * Return: Always 0.
 */
int _isupper(int c)
{
char i;

for (i = 'A' ; i <= 'Z' ; i++)
{
if (i == c)
return (1);
}
return (0);
}
