#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 10; i++)
	{
		char cha;

		for (cha = 'a'; cha <= 'z'; cha++)
		{
			_putchar(cha);
		}
		_putchar('\n');
	}
}
