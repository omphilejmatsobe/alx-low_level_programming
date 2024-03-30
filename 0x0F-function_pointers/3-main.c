#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Simple Calculator program.
 * @argc: Argument count.
 * @argv: Argument variable.
 *
 * Return: 0 if success.
 */
int main(int argc, char *argv[])
{
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
