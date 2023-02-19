#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		putchar(cha);
	}
	for (cha = 'A'; cha <= 'Z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
