#include "main.h"
/**
 * cp - Copies from a file to another
 * @file_to: char
 * @file_from: char
 * Return: 0
 */
int cp(char *file_to, char *file_from)
{
char *buffer[1024];
int td, fd, fr, fw;
int x, y;

	fd = open(file_from, O_RDONLY);
if (fd < 0)
return (98);
	td = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (td < 0)
return (99);
	fr = read(fd, buffer, 1024);
if (fr < 0)
return (98);
while (fr > 0)
{
	fw = write(td, buffer, fr);
if (fw < 0)
return (99);
	fr = read(fd, buffer, 1024);
if (fr < 0)
return (98);
}
	x = close(fd);
if (x < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", x);
return (100);
}
	y = close(td);
if (y < 0)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", y);
return (100);
}
return (0);
}

/**
 * main - main
 * @ac: argc
 * @av: argv
 *
 * Return: always 0
 */
int main(int ac, char **av)
{
int i;
if (ac != 3)
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
i = cp(av[2], av[1]);
switch (i)
{
case (98):
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
exit(98);
case (99):
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
exit(99);
case (100):
exit(100);
default:
return (0);
}
}
