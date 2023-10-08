#include "stdio.h"
#include "stdlib.h"

/**
 * main - program that prints that prints its name.
 * @argc: number of arguments
 * @argv: pointers to the array of the strings of the arguments
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
