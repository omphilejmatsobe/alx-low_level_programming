#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - prints all arguments received.
 * @argc: type int argument
 * @argv: type char argument of string.
 * Return: if not receive 2 arg, rt error
 */
int main(int argc, char *argv[])
{
	int x, result, r;

	result = 0;

	for (x = 1; x < argc ; x++)
	{
		r = strtol(argv[x], NULL, 10);

		if (r == 0)
		{
			printf("Error\n");
			return (1);

		}

		if (atoi(argv[x]) > 0)
		{
			result += r;
		}
	}

	printf("%d\n", result);
	return (0);
}
