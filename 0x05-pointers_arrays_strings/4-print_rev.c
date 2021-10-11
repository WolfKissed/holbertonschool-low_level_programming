#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: char
 * Return: 0
 */
void _puts(char *str)
{
strrev(str);
_puts("%s", str);
printf("\n");
}
