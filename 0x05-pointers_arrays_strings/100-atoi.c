#include "main.h"
#include <stdbool.h>
#include <math.h>
/**
 * _atoi - write a function that convert a string an integer
 *
 * @s: string to be converted into integer
 * Return: interger output of a converted string
 */
int _atoi(char *s)
{
	int sign, out, pow, i, firstDig, digCount, x, y;
	bool hasDigits, isDigit, makeBreak;

	hasDigits = isDigit = makeBreak = false;
	pow = 1;
	digCount = out = i = 0;
	while (s[i] != '\0')
	{
		if ((s[i] >= 48 && s[i] <= 57))
		{
			hasDigits = isDigit = true;
			digCount++;
			firstDig = i - digCount + 1;
			if (s[firstDig - 1] == 45)
				sign = (-1);
			else
				sign = 1;

			if ((s[i + 1] < 48) || (s[i + 1] > 57))
				makeBreak = true;

		}
		else
			isDigit = false;
		i++;

		if (makeBreak == true)
			break;
	}

	if (hasDigits == true)
	{
		for (x = 0; x < digCount; x++)
		{
			pow = 1;
			for (y = 0; y < (digCount - 1) - x; y++)
			{
				pow = pow * 10;
			}
			out = out + ((s[firstDig + x] - 48) * pow);
		}
	}
	else
		return (0);
	out = out * sign;
	return (out);
}
