#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 *
 * @a: input string
 *
 * Return: the string with all words capitalized
 */
char *cap_string(char *a)
{
	int x, y, i, state;
	int d[] = {9, 10, 11, 32, 33, 34, 40, 41, 44, 46, 59, 123, 125};

	for (x = 0; a[x] != '\0'; x++)
	{
		state = 0;

		for (i = 0; i < 13; i++)
		{

			if ((a[x - 1] == d[i]) && ((a[x] >= 65 && a[x] <= 90) || (a[x] >= 97 && a[x] <= 122)))
			{
				state = 1;
				break;
			}
			else
			{
				state = 0;
			}
		}

		if (state == 1)
		{
			if (a[x] >= 97 && a[x] <= 122)
			{
				y = 122 - a[x];
				a[x] = 90 - y;
			}
		}
	}
        return (a);
}
