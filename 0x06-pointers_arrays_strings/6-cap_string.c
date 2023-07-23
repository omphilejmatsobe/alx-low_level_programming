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
	char d[] = ",;.!?(){}\n\t\" ";

	for (x = 0; a[x] != '\0'; x++)
	{
		state = 0;

		for (i = 0; d[i] != '\0'; i++)
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
