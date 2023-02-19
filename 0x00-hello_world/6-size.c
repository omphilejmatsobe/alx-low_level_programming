#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("The size of int: %lu bytes(s)\n", sizeof(int));
	printf("The size of char: %lu bytes(s)\n", sizeof(char));
	printf("The size of float: %lu byts(s)\n", sizeof(float));
	printf("The size of long: %lu bytes(s)\n", sizeof(long));
	printf("The size of short: %lu bytes(s)\n", sizeof(short));
	printf("The size of long int: %lu bytes(s)\n", sizeof(long int));
	printf("The size of unsigned short: %lu bytes(s)\n", sizeof(unsigned long));
	printf("The size of unsigned long: %lu bytes(s)\n", sizeof(unsigned short));
	return (0);
}
