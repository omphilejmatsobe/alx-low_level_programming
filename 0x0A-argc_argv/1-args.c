#include "main.h"
/**
 * main - prints the number of arguments passed
 *
 * @argc: input int argument
 * @argv: input array argument
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
