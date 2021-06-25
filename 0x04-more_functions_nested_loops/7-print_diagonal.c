#include "holberton.h"

/**
 * print_line - Entry point
 *
 * @n: paramater to be passed to function
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int count, i, u;

	if (n > 0)
	{
		for (i = 1; i < n; i++)
		{
			_putchar(28);
		}
		_putchar(92);
	}

	_putchar('\n');
}
