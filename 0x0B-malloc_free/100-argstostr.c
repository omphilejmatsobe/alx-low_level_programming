#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: input
 * @av: input pointer
 * Return: str
 */
char *argstostr(int ac, char **av)
{
	int k, x, c = 0, l = 0;
	char *arg;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (k = 0; av[x][k]; k++)
			l++;
	}
	l += ac;

	arg = malloc(sizeof(char) * l + 1);

	if (arg == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (k = 0; av[x][k]; k++)
		{
			arg[c] = av[x][k];
			c++;
		}

		if (arg[c] == '\0')
		{
			arg[c++] = '\n';
		}
	}
	return (arg);
}
