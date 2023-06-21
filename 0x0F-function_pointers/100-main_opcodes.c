#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints opcode of the function
 * @argc: arg count
 * @argv: input argument
 * Return: Exit 1 if one arg is not correct, 2 if byte is negative.
 */
int main(int argc, char *argv[])
{
	short i, y;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	i = atoi(argv[1]);

	if (i < 0)
	{
		printf("Error\n");
		exit(2);
	}

	printf("%02x", *((unsigned char *) (main)));

	for (y = 1; y < i; ++y)
		printf(" %02x", *((unsigned char *) (main + y)));
	putchar('\n');
	exit(EXIT_SUCCESS);
}
