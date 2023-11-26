#include "main.h"

/**
 *
 *
 *
 *
 */
int main(int argc , char **argv)
{
	long unsigned int x, y;

	if (argc > 3)
	{
		printf("Error");
		exit(98);
	}
	for (x = 1; x < (long unsigned int) argc; x++)
	{
		for (y = 0; y < sizeof(argv[x]); y++)
		{
			if (argv[x][y] > 57 && argv[x][y] < 48)
			{
				printf("Error");
				exit(98);
			}
		}
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
