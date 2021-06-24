#include "holberton.h"

/**
 * print_trianglee - Entry point
 *
 * @size: paramater to be passed to function
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int angle;
		int i;

		angle -= size;

		for (i = 1; i <= angle; i++)
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
