#include <stdio.h>


/**
 * main - Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *       
 *
 * Return: Always 0.
 */
int main(void)
{
	int num;
	unsigned long fibu1 = 0, fibu2 = 1, sum;

	for (num = 0; num <=49; num++)
	{
		sum = fibu1 + fibu2;
		printf("%lu", sum);

		fibu1 = fibu2;
		fibu2 = sum;

		if (num == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}

