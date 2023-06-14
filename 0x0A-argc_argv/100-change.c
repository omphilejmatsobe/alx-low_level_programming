#include "main.h"
/**
 * main - prints the minimum number of coins to
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int c, x, change;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	c = atoi(argv[1]);
	change = 0;
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for (x = 0; x < 5 && c >= 0; x++)
	{
		while (c >= coins[x])
		{
			change++;
			c -= coins[x];
		}
	}
	printf("%d\n", change);
	return (0);
}
