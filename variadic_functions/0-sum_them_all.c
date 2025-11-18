#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of arguments passed to the function
 *
 * Return: the sum of all parameters, or 0 if n is 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i, total = 0;

	if (n == 0)
		return (0);

	va_start(arg, n);
	for (i = 0; i < n; i++)
		total += va_arg(arg, int);

	va_end(arg);
	return (total);
}
