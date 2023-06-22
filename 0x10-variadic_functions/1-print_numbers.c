#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers followed by a new line.
 * @separator: input char pointer string separator
 * @n: input unsigned int number
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int x = n;

	if (separator == NULL)
		separator = "";
	va_start(arg, n);
	if (x--)
		printf("%d", va_arg(arg, int));
	while (x-- > 0)
		printf("%s%d", separator, va_arg(arg, int));
	printf("\n");
	va_end(arg);
}
