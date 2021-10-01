#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/**
 * main - Prints the alphabets in lower case
 *
 * Return: 0
 */
int main(void)
{
    for(int i = 'A'; i <= 'Z'; i++)
{
    int lower_i = tolower(i);
    putchar(lower_i);
}

    return 0;
}
