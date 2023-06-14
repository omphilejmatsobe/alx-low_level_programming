#include "main.h"
/**
 * main - prints all arguments received.
 * @argc: input int argument
 * @argv: input arr argument
 * Return: 0 (success), if not error
 */
int main(int argc, char *argv[])
{
	int arg1, arg2, mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		mul = arg1 * arg2;
		printf("%d\n", mul);
	}
	return (0);
}
