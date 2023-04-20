#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: The number of parameters
 * @...: The parameters to add
 * Return: If n == 0, then it is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list me;
	unsigned int i;
	int sum = 0;

	va_start(me, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(me, int);
	}
	va_end(me);
	return (sum);
}
