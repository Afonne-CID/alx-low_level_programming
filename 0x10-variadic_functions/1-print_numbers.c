#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: the string to be printed betwen numbers
 * @n: number of integers passed to 'print_numbers'
 *
 * Return: result
 */
void print_numbers(const char *separator, const unsigned int n, ...)
 {
 	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{	
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(ap);
 }
