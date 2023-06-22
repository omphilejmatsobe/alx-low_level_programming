#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - func that print strings, followed by a new line
 * @n: Type unsigned int, number of str paseed to a function
 * @separator: type char pointer string to be printed between numbers
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	char *str;
	int i;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(arg, n);
	i = 0;

	while (i < (int) n)
	{
		str = va_arg(arg, char *);
		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");
		if (separator != NULL && i != (int) n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg);
}

