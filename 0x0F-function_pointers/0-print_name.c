#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * print_name - print a name
 *
 * @name - pointer to function that prints the name
 * @f - pointers to function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
