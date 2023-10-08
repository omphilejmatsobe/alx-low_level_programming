#include "stdlib.h"
#include "stdio.h"
/**
 * main - prints all arguments received
 * @argc: number of arguments
 * @argv: pointer to array of string of the arguments
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	exit(EXIT_SUCCESS);
}
