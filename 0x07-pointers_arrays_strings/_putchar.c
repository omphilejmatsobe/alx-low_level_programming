#include "main.h"
#include <unistd.h>


/**
 * _putchar - writes the char c to stdout
 * @c: The character to print
 *
 * Return: If success 1, else -1
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
