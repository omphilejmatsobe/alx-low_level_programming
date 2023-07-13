#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: intput filename
 * @letters: type size_t letters
 * Return: if cannot be oppened or read 0
 * if funciton fails or does not write the expected amount of bytes, return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rd, wr;
	int f;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
	{
		free(buffer);
		return (0);
	}
	rd = read(f, buffer, letters);
	if (rd == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}
	close(f);

	wr = write(STDOUT_FILENO, buffer, rd);

	if (wr == -1)
	{
		free(buffer);
		return (0);
	}

	if (wr != rd)
		return (0);
	return (rd);
}
