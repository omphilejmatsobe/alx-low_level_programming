#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *separator = "";
	va_list arg;


	va_start(arg, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					x++;
					continue;
			}
			separator = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(arg);
}
