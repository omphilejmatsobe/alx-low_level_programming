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
	int countArr, countIdx, end, x, y, total, totalIdx, flag;

	total = flag = 0;

	if (str == NULL || strlen(str) == 0)
		return (NULL);

	countArr = count(str);
	if (countArr <= 0)
		return (NULL);

	arr = malloc((countArr + 1) * sizeof(char *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < countArr; x++)
	{
		total = totalIdx = flag = end = 0;
		countIdx = countIndex(countArr, (x + 1), str);
		arr[x] = malloc((countIdx + 1) * sizeof(char));
		if (arr[x] == NULL)
		{
			while (x >= 0)
			{
				free(arr[x]);
				x--;
			}
			free(arr);
			return (NULL);
		}
		for (y = 0; str[y] != '\0' && end != 1; y++)
		{
			if (str[y] != ' ')
			{
				if (flag == 0)
				{
					total++;
					flag = 1;
				}

				if (total == (x + 1) && totalIdx < countIdx)
				{
					arr[x][totalIdx] = str[y];
					totalIdx++;
				}
			}
			else
				flag = 0;

			if (total > (x + 1))
				end = 1;
		}
		arr[x][y] = '\0';
	}

	arr[x] = NULL;
	return (arr);
}
/**
 * count - counts the number of words in a string
 * @str: input string
 *
 * Return: the number of words in a string
 */
int count(char *str)
{
	int total, flag, x;

	flag = 0;
	total = 0;
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

	return (total);
}

/**
 * countIndex - counts all elements of a word
 * @countArr: input max count of words of the words data (Quantity, etc)
 * @limit: input current number of words
 * @str: the string containing the words
 *
 * Return: the number of letters in each word
 */
int countIndex(int countArr, int limit, char *str)
{
	int totalIdx, total, x, y, flag, end;

	totalIdx = x = y = total = 0;
	for (x = 0; x < countArr; x++)
	{
		end = 0;
		flag = 0;
		for (y = 0; str[y] != '\0' && end != 1; y++)
		{
			if (str[y] != ' ')
			{
				if (flag == 0)
				{
					flag = 1;
					total++;
				}

				if (total == limit)
				{
					totalIdx++;
				}
			}
			else
				flag = 0;

			if (total > limit)
				end = 1;
		}
	}

	return (totalIdx);
}
