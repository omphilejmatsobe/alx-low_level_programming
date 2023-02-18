#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("The size of int: %d bytes\n", (int)sizeof(int));
	printf("The size of char: %d bytes\n", (int)sizeof(char));
	printf("The size of float: %d byts\n", (int)sizeof(float));
	printf("The size of long: %d bytes\n", (int)sizeof(long));
	return (0);
}
