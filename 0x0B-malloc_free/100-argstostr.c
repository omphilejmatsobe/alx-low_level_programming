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
	int x, size, line;
	long unsigned int y;

	x = size = line = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	arr = malloc(ac * sizeof(char *) + ac);
	if (arr == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; y < (strlen(av[x])); y++)
		{
			arr[size + y] = av[x][y];
		}

		arr[size + y] = '\n';

		size += (strlen(av[x]) + 1);
	}
	return (arr);
}
