#include "main.h"
/**
 * main -  check if the code work
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
	}
}
