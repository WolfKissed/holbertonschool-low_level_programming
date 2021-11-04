#include <stdarg>
#include "main.h"
/**
 * sum_them_all - Sums
 * @n: int
 * @...: int
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
va_list x;
unsigned int i, s = 0;

va_start(x, n);
for (i = 0; i < n; i++)
	s += va_arg(x, int);
va_end(x);
return (s);
}
