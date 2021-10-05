#include "main.h"
/**
 * print_last_digit - Prints the last digit
 *
 * @n : int
 *
 * Return: Always 1 (Success)
 */
int print_last_digit(int n)
{
long x = n;
        if (x < 0)
    x = -x;
        if (x > 10)
{
    x %= 10;
}
