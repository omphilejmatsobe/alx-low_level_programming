#include "main.h"

/**
 * create_file - creates a file
 * @filename: type char filename pointer of FD
 * @text_content: input type char pointer
 * Return: -1 if NULL in, 1 if success
 */
int create_file(const char *filename, char *text_content)
{
	int out, in, x;

	out = in = x = 0;
	if (filename == NULL)
		return (-1);

	in = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (in == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (*(text_content + x) != '\0')
		{
			x++;
		}
		out = write(in, text_content, x);
	}

	if (out == -1 && out != x)
		return (-1);

	return (1);
}
