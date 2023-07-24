#include "main.h"
/**
 * leet - Write a function that encodes a string into 1337.
 *
 * @a: string to be inclide into 1337
 *
 * Return: the encoded string
 */
char *leet(char *a)
{
	int i, x;
	char letter[] = "AaEeOoTtLl";
	char leet[] = "4433007711";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (x = 0; letter[x] != '\0'; x++)
		{
			if (a[i] == letter[x])
			{
				a[i] = leet[x];
			}
		}

	}

	return (a);
}
