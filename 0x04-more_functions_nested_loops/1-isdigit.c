#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: char
 * Return: Always 0.
 */
int _isdigit(int c)
{
int i;

for (i = '0' ; i <= '9' ; i++)
{
if (i == c)
return (1);
}
return (0);
}
