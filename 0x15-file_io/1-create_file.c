#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: char
 * @text_content: char
 * Return: 0
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, x = 0;

if (filename == NULL)
	return (-1);
if (text_content != NULL)
{
for (x = 0; text_content[x];)
	x++;
}
	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(op, text_content, x);
if (op == -1 || wr == -1)
return (-1);
	close(op);
return (1);
}
