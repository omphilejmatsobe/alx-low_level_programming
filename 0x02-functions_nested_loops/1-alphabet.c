#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int alp;

	for (alp = 0; alp <= 26; alp++)
	{
		putchar(alp + '0');
	}
	putchar('\n');
	return (0);
}
		
