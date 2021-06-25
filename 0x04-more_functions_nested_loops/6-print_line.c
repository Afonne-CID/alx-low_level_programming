#include "holberton.h"

/**
 * print_line - Entry point
 *
 * @n: paramater to be passed to function
 *
 */
void print_line(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count <= n; count++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
