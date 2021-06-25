#include "holberton.h"

/**
 * print_diagonal - Entry point
 *
 * @n: paramater to be passed to function
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int count;

	if (n > 0)
	{
		for (count = 1; count < n; count++)
		{
			_putchar(28);
		}
		_putchar(92);
		_putchar(28);
	}
	else
	{
		_putchar('\n');
	}
}
