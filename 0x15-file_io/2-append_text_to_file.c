#include "main.h"

/**
 * append_text_to_file - Appends text to a file.
 * @filename: char
 * @text_content: char
 * Return: 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
int op, wr, x = 0;

if (filename == NULL)
	return (-1);

if (text_content != NULL)
{
for (x = 0; text_content[x];)
	x++;
}
	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, len);
if (op == -1 || wr == -1)
return (-1);
	close(op);
return (1);
}
