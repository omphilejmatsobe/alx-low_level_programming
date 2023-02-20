#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Alway 0 (success)
 */
int main(void)
{
	int i;
	char hex;

	for (i = 0; i <= 9; i++)
	{
		putchar(i + '0');
	}
	for (hex = 'a'; hex <= 'f'; hex++)
	{
		putchar(hex);
	}
	putchar('\n');
	return (0);
}
