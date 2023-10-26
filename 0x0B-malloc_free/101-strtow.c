#include "main.h"
/**
 *
 *
 *
 */
char **strtow(char *str)
{
	char **arr;
	int x, y, z, arrIdx, idx, innerIdx, strCount;

	idx = innerIdx = 0;
	strCount = arrIdx = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		if (str[x] != 32)
		{
			if (str[x + 1] == 32 || str[x + 1] == '\0')
				idx++;
		}
	}

	arr = malloc(sizeof(char *) * (idx + 1));
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (x = 0; x < idx; x++)
	{
		innerIdx = strCount = arrIdx = 0;
		for (y = 0; str[y] != '\0'; y++)
		{
			if (str[y] != 32)
			{
				innerIdx++;
				if (str[y + 1] == 32 || str[y + 1] == '\0')
				{
					strCount++;
					if ((x + 1) == strCount)
					{
						arr[x] = malloc(sizeof(char) * (innerIdx + 1));
						if (arr[x] == NULL)
						{
							free(arr[x]);
							free(arr);
							return (NULL);
						}
						for (z = (y - (innerIdx - 1)); z <= y; z++)
						{
							arr[x][arrIdx] = str[z];
							arrIdx++;
						}
						arr[x][z] = '\0';
					}

					innerIdx = 0;
				}
			}
		}

	}

	arr[idx] = '\0';
	return (arr);
}
