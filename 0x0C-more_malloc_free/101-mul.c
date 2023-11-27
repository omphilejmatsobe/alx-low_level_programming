#include "main.h"

/**
 *
 *
 *
 *
 */
int main(int argc , char **argv)
{
	long int x, y, prod;

	if (argc > 3)
	{
		printf("Error");
		exit(98);
	}
	for (x = 1; x < (long int) argc; x++)
	{
		for (y = 0; y < (long int) sizeof(argv[x]); y++)
		{
			if (argv[x][y] > 57 && argv[x][y] < 48)
			{
				printf("Error");
				exit(98);
			}
		}
	}

	prod = x * y;

	printf("%li\n", prod);
	return (0);
}
