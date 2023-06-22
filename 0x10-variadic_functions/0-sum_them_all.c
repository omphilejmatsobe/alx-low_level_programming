#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the arguments.
 * @n: input int.
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int x, res;
	va_list arg;

	if (n == 0)
		return (0);

	va_start(arg, n);
	res = x = 0;
	for (x = 0; x < n; x++)
	{
		res = res + va_arg(arg, int);
	}
	va_end(arg);
	return (res);
}
