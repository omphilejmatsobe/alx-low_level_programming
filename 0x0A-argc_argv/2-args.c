#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all its arguments
 * @argc: argument count
 * @argv: argument variable
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
