#include<stdio.h>

/**
 * main - check the code.
 * Return: Always 0.
 */
int fibonacci_series(int);
int main(void)
{
   int c = 0, i;

   for ( i = 1 ; i <= 50 ; i++ )
   {
      printf("%d ,", fibonacci_series(c));
      c++;
   }

   return 0;
}
/**
 * fibonacci_series - check the code.
 * Return: 0.
 */
int fibonacci_series(int num)
{
   if ( num == 0 )
     return 0;
   else if ( num == 1 )
     return 1;
   else
     return ( fibonacci_series(num-1) + fibonacci_series(num-2) );
}
