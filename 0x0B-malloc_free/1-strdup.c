#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
* _strdup - duplicate to new memory space location
* @str: char
* Return: 0
*/
char *_strdup(char *str)
{
	int x, y;
	char *cha;

	x = 0;

	while (str[x] != '\0')
		x++;

	cha = malloc(sizeof(char) * (x + 1));

	if (cha == NULL || str == NULL)
		return (NULL);

	for (y = 0; str[y]; y++)
		cha[y] = str[y];

	return (cha);
}
