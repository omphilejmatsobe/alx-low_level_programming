#include "main.h"
/**
 * _isupper - checks if char is uppercase
 *
 * @c: the character to check if uppercase or not
 * Return: 1 if upper and 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
