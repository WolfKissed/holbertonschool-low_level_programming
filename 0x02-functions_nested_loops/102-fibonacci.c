#include<stdio.h>

/**
 * _abs - check the code.
 * @n: int
 * Return: Always 0.
 */
int fibonacci_series(int);
int main()
{
   int c = 0, i;

   for ( i = 1 ; i <= 50 ; i++ )
   {
      printf("%d\n", fibonacci_series(c));
      c++;
   }

   return 0;
}
int fibonacci_series(int num)
{
   if ( num == 0 )
     return 0;
   else if ( num == 1 )
     return 1;
   else
     return ( fibonacci_series(num-1) + fibonacci_series(num-2) );
}
