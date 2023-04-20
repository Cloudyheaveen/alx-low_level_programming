#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Function that prints anything
 * @format: A list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	va_list argument;
	unsigned int i = 0;
	char *str, *sep = "";

	va_start(argument, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(argument, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(argument, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(argument, double));
					break;
				case 's':
					str = va_arg(argument, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(argument);
}
