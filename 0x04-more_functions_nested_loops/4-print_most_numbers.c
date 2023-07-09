#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 - 9 with exceptions
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			printf("%d", i);
	}
	putchar('\n');
}
