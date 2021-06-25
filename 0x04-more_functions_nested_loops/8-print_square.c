#include "holberton.h"

/**
 * print_square - Entry point
 *
 * @size: paramater to be passed to function
 *
 * Return: Always 0
 */
void print_square(int size)
{
	int i, count;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (count = 0; count < size; count++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
