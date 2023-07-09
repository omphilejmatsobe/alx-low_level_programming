#include "main.h"
/**
 * more_numbers - funtion that prints 10 times the numbers
 * form 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			printf("%d", j);
		}

		putchar('\n');
	}
}
