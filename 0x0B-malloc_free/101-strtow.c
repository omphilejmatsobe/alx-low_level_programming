#include "main.h"

/**
 * strtow - splits a string into words
 * @str: input string to be separated
 *
 * Return: a 2D array of the words.
 */
char **strtow(char *str)
{
	char **arr;
	int *countArr, *countIdx, x, y, z;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	countArr = count(str);
	countIdx = countIndex(countArr, str);

	if (countArr[0] == 0 || countIdx == NULL)
		return NULL;

	arr = malloc((countArr[0] * sizeof(char *)) + sizeof(char));
	if (arr == NULL)
		return (NULL);

	for (x = 1; x <= countArr[0]; x++)
	{
		arr[x - 1] = malloc((countIdx[x - 1] * sizeof(char)) + sizeof(char));
		if (arr[x - 1] == NULL)
		{
			while ((x - 1) >= 0)
			{
				free(arr[x - 1]);
				x--;
			}
			free(arr);
			return (NULL);
		}
		z = 0;
		for (y = countArr[x]; str[y] != ' ' && str[y] != '\0'; y++)
		{
			arr[x - 1][z] = str[y];
			z++;
		}
		arr[x - 1][z] = '\0';
	}

	arr[countArr[0]] = '\0';
	return (arr);
}
/**
 * count - counts the number of words in a string
 * @str: input string
 *
 * Return: the number of words in a string
 */
int *count(char *str)
{
	int *count, total, start, flag, x, counter;

	flag = 0;
	total = start = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] != ' ')
		{
			if (flag == 0)
			{
				total++;
				flag = 1;
			}
		}
		else
			flag = 0;
	}

	count = malloc((total + 1) * sizeof(int));
	if (count == NULL)
		return (NULL);

	count[0] = total;
	counter = 0;

	flag = 0;
	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] != ' ')
		{
			if (flag == 0)
			{
				counter++;
				flag = 1;
				count[counter] = x;
			}
		}
		else
			flag = 0;
	}
	return (count);
}

/**
 * countIdx - counts all elements of a word
 * @countArr: input arr of the words data (Quantity, etc)
 * @str: the string containing the words
 *
 * Return: the number of letters in each word
 */
int *countIndex(int *countArr, char *str)
{
	int *count;
	int x, y, total;

	count = malloc(countArr[0] * sizeof(int));

	for (x = 1; x <= countArr[0]; x++)
	{
		total = 0;
		for (y = countArr[x]; str[y] != ' ' && str[y] != '\0'; y++)
			total++;

		count[x - 1] = total;
	}
	return (count);
}
