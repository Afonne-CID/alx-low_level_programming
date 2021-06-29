#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Function to print the value in pointers
 *
 * @a and @n: parameters to be passed to function print_array
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int count;
	int value;

	value = 0;

	if (n > 0)
	{
		for (count = 0; count < n; count++)
		{
			value = *(a + count);

			if (count == n - 1)
			{
				printf("%d\n", value);
			}
	
			else
			{
				printf("%d, ", value);
			}
		}
	}
	else
	{
		printf("\n");
		_putchar('\n');
	}
}
