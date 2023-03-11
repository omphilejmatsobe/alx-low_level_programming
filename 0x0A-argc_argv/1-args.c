#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the number of arguments passed into it
 *@argc: argument control
 *@argv: argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int count;

	*argv = 0;
	count = argc - 1;
	printf("%d\n", count);
	return (0);
}
