#include "main.h"
/**
 * _isalpha - checks if character is alphabet
 * Returns: 1 if alphabet otherwise 0
 */
int _isalpha(int c)
{
	if ( c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if ( c >= 'A' && C <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
