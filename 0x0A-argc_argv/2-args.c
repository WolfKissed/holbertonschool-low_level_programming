#include "main.h"
/**
 * main - Prints arguments
 * @argc: int
 * @argv: char
 * Return: 0
 */
int main(int argc, char *argv[])
{
int i = 0;
for (; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
