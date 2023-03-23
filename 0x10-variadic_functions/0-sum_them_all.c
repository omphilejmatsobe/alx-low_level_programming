#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -  returns the sum of all its parameters
 *@n: input
 *@... : input
 *Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x,  result;
	va_list add;

	result = 0;

	va_start(add, n);

	for (x = 0; x < n; x++)
		result += va_arg(add, int);
	va_end(add);
	return (result);
}
