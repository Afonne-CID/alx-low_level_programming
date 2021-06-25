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
	int u;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			for (u = 0; u < count; u++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
