#include "main.h"
/**
 * string_toupper - change to uppercase
 * @s:char
 * Return:char
 */
char *string_toupper(char *s)
{
char *str = s;

while (*s != '\0')
{
if ((*s >= 'a') && (*s <= 'z'))
*s = *s - 32;
s++;
}
return (str);
}
