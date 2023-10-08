#include "stdlib.h"
#include "stdio.h"
/**
 * main - prints the number of argumenrs passed into it
 * @argc: number of arguments passed
 * @argv: the pointers to array of arguments
 *
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	exit(EXIT_SUCCESS);
}
