#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints number of its arguments.
 * @argc: number of arguments
 * @argv: pointers to the array of the strings of the arguments
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
