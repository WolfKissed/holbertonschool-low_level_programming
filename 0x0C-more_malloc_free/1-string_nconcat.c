#include "main.h"
/**
 * string_nconcat - Concats two strings
 * @s1: char
 * @s2: char
 * @n: unsigned int
 *
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c;
	unsigned int length = n, i;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
for (i = 0; s1[i]; i++)
	length++;
c = malloc(sizeof(char) * (len + 1));
if (c == NULL)
return (NULL);
	length = 0;
for (i = 0; s1[i]; i++)
	c[length++] = s1[i];
for (i = 0; s2[i] && i < n; i++)
	c[length++] = s2[i];
	c[length] = '\0';
return (c);
}
