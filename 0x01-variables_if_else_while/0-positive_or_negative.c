#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <locale.h>
#include <unistd.h>
/* *
 * main - Generates a random number then prints whether it is negative or positive 
 * Return: 0 
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() - RAND_MAX / 2;
    if (n <= 0.0) {
        if (n == 0.0)
            printf("is zero\n");
        else
            printf("is negative\n");
    } else
        printf("is positive\n");
    return (0);
}
