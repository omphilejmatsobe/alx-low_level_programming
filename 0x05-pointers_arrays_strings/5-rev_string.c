#include "main.h"

/**
 * rev_string - prints string in revers
 * @s: Input string
 *
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i;
	int length = 0;
	char holder;

	for (i = 0; *(s + i) != '\0'; i++)
		length++;

	for (i = 0; i <= (int)(length / 2); i++)
	{
		holder = *(s + i);
		*(s + i) = *(s + (length - 1) - i);
		*(s + (length - 1) - i) = holder;
	}
}
