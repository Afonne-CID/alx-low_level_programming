#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: a constant unisgned int paramater (required argument)
 * @...: a list of unknown optional arguments
 *
 * Return: sum of all the arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
