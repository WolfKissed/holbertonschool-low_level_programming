#include "main.h"
/**
 * _strncpy - concatenates two strings
 * @dest: string
 * @src: string
 * @n: int
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0; src[i] != '\0'; i++)
if (i < n)
dest[i] = src[i];
for (; i < n; i++)
	dest[i] = '\0';
return (dest);
}
