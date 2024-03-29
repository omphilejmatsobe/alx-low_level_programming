#include "function_pointers.h"

/**
 * print_name - Prints a name using the function pointer argument.
 * @name: Name to be printed.
 * @f: Pointer to the function that prints name.
 *
 * Return: None.
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) != NULL)
		(*f)(name);
}
