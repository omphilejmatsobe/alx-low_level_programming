#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	
	i = 0;
	
	for (i = 0; i < 9; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	
	for (i = 9; i==9 ; i++);
	putchar('9');
	putchar('\n');
	return (0);
}		
