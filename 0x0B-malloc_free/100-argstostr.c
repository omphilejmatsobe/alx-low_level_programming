#include "main.h"
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argument count.
 * @av: argument array.
 *
 *
 * Return: the array of the concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *arr;
	int x, y, s, totalSpace;

	s = 0;
	totalSpace = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		totalSpace += (int)strlen(av[x]);
	}

	arr = malloc(sizeof(char) * 1 + (totalSpace + ac));

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < ac; x++)
	{
		for (y = 0; y < (int)strlen(av[x]); y++)
		{
			arr[s] = av[x][y];
			s++;
		}
		arr[s] = '\n';
		s++;
	}

	return (arr);
}
