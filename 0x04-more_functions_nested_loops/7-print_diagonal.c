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
	int count;

	if (n > 0)
	{
		if (n != 1)
		{
			int diag;
			int i;

			diag = n - 1;

			for (i = 1; i <= diag; i++)
			{
				_putchar(28);
			}

			_putchar(92);
		}
		else
		{
			_putchar(92);
		}
	}

	_putchar('\n');
}
