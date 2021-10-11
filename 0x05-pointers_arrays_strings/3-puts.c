#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a string
 * @str: char
 * Return: 0
 */
void _puts(char *str)
{
int i = 0;

while (str[i] != '\0')
{
printf("%s", str);
i++;
}
}
