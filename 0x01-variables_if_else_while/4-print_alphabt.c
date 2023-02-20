#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char cha;

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		if ((cha != 'q' && cha != 'e') && cha <= 'z')
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
