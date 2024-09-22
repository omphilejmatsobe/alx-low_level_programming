#include <stdio.h>
#include <stdlib.h>
#include "math.h"

/**
 * main - calculate the sam of the arguments
 * @argc: argument count
 * @argv: arhument variables
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int result = 0;
	(void) argc;

	if (argc == 3)
		printf("Error");

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);
}
