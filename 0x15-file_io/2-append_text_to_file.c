#include "main.h"

/**
 * append_text_to_file - Function that creates a file
 * @filename: type char filename pointer of FD
 * @text_content: type char pointer of char
 * Return: -1 if NULL in FN, 1 on sucess
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int in, out, x;

	in = open(filename, O_RDWR | O_APPEND);
	if (filename == NULL)
		return (-1);
	if (in == -1)
	return (-1);
	if (text_content == NULL)
		return (1);
	while (*(text_content + x) != '\0')
		x++;
	out = write(in, text_content, x);
	if (out == -1)
		return (-1);
	return (1);
}
