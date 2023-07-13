#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: a pointer to file
 * @text_content: input string to add eof
 * Return: If the function fails or filename is NULL - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int out, in;
	int len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	out = open(filename, O_WRONLY | O_APPEND);
	in = write(out, text_content, len);
	if (out == -1 || in == -1)
		return (-1);
	close(out);
	return (1);
}
