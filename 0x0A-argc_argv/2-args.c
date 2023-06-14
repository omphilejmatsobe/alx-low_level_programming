#include "main.h"
/**
 * main - prints all arguments received.
 * @argc: input int argument
 * @argv: input array argument
 * Return: 0 success 1 if error
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
