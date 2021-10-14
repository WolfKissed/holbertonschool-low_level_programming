#include "main.h"
/**
* cap_string- capitalizes words
* @s: char
* Return: 0
*/

char *cap_string(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] == ',') || (s[i] == ';') || (s[i] == '.') || (s[i] == '!')
|| (s[i] == '?') || (s[i] == '"') || (s[i] == '(') || (s[i] == ')')
|| (s[i] == '{') || (s[i] == '}') || (s[i] == ' ') || (s[i] == '\t')
|| (s[i] == '\n'))
{
if ((s[i + 1] >= 'a') && (s[i + 1] <= 'z'))
s[i + 1] = s[i + 1] - 32;
}
if ((s[0] >= 'a') && (s[0] <= 'z'))
s[0] = s[0] - 32;
}
return (s);

}
