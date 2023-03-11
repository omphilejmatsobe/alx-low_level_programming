#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - prints product of 2 numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int x, y, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	prod = x * y;
	printf("%d\n", prod);
	return (0);
}
