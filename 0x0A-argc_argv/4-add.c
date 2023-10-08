#include "stdlib.h"
#include "stdio.h"
/**
 * main - adds positive numebers
 * @argc: number of arguments
 * @argv: pointer to the array of string of arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int check;
	int x = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (check = 1; check < argc; check++)
	{
		if (atoi(argv[check]) == 0)
		{
			printf("Error\n");
			return (1);
		}

		x += atoi(argv[check]);
	}

	printf("%d\n", x);
	return (0);
}
