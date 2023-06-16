#include "main.h"
/**
 * main - prints all arguments received.
 * @argc: input int argument
 * @argv: input char rgument of string.
 * Return: 0 if success, if not 1
 */
int main(int argc, char *argv[])
{
	int n1, n2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		mul = n1 * n2;
		printf("%d\n", mul);
	}
	return (0);
}
