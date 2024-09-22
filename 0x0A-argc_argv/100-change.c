#include "stdlib.h"
#include "stdio.h"
#include "ctype.h"
/**
 * main - counts minimum number of coins to make change for an amount of money
 * @argc: number of arguments
 * @argv: pointer to the array of string of arguments
 *
 * Return: 0 if success, 1 if success
 */
int main(int argc, char *argv[])
{
	int count = 0;
	int x = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);

	if (x < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if ((x / 25) >= 1)
	{
		count += (int)(x / 25);
		x -= 25 * count;
	}
	if ((x / 10) >= 1)
	{
		count += (int)(x / 10);
		x -= 10 * (int)(x / 10);
	}
	if ((x / 5) >= 1)
	{
		count += (int)(x / 5);
		x -= 5 * (int)(x / 5);
	}
	if ((x / 2) >= 1)
	{
		count += (int)(x / 2);
		x -= 2 * (int)(x / 2);
	}
	count += x;
	printf("%d\n", count);
	return (0);
}
