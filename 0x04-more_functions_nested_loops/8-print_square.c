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
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int square;
		int i;

		square += size;

		for (i = 1; i <= square; i++)
		{
			int count;

			for (count = 1; count <= size; count++)
			{
				_putchar(35);
			}
				_putchar('\n');
		}
	}
}
