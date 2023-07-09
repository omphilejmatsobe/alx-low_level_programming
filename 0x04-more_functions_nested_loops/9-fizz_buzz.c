#include "main.h"
/**
 * main - prints FizzBuzz challenge
 *
 * Return: 0 if succes 
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) != 0)
			printf("Fizz");
		else if ((i % 3) != 0 && (i % 5) == 0)
			printf("Buzz");
		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");
		else
			printf("%d", i);

		printf(" ");
	}

	putchar('\n');
	return(0);
}
