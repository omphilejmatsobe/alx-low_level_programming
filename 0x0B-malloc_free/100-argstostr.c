#include "main.h"

/**
 * argstostr - concatenates all the arguments of the program.
 * @ac: argument count.
 * @av: array of arguments.
 *
 * Return: arr pf all the arguments concatenated, if successful.
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int x, size;
	long unsigned int y;

	x = size = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	arr = malloc(ac * sizeof(char *));
	if (arr == NULL)
		return (NULL);

	for (x = 1; x < ac; x++)
	{
		for (y = 0; y < strlen(av[x]); y++)
		{
			arr[size + y] = av[x][y];
		}

		size += strlen(av[x]);
	}
	return (arr);
}
