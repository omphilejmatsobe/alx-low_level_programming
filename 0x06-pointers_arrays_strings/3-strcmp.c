#include "main.h"
/**
 * _strcmp - compares two strings
 *
 * @s1: input string 1 to be compared
 * @s2: input string 2 to be compared
 *
 * Return: 0 if the strins are the same, less than 0 if s1<s2; greater if s1>s2;
 */
int _strcmp(char *s1, char *s2)
{
	int i, x, cmp, cmpFactor;

	i = x = cmp = 0;
	cmpFactor = 15;

	while (s1[i] != '\0' || s2[i] != '\0')
	{

		if (s1[i] > s2[i])
			return (cmpFactor);

		else if(s1[i] < s2[i])
			return (cmpFactor * (-1));

		i++;
	}

	if (s1[i] != s2[i] && ((s1[i] == '\0') || s2[i] == '\0'))
	{
		if (s1[i] == '\0' )
			return (cmp);
		else if(s2[i] == '\0')
			return (cmp * (-1));
	}

	return (0);
}
