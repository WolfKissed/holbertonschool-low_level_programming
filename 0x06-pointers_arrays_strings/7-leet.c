#include "main.h"
/**
 * leet - encodes
 * @s: char
 * Return: 0
 */
char *leet(char *s)
{
int i, j, k;
char chars[] = "oOlLeEaAtT";
char ints[] = "0011334477";
for (i = 0; s[i] != '\0'; i++)
{
k = 0;
for (j = 0; chars[j] != '\0'; j++)
{
if (s[i] == chars[j])
{
k = j;
s[i] = ints[k];
}
}
k++;
}
return (s);
}
