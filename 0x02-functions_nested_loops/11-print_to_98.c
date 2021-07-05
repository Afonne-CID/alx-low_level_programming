#include <stdio.h>
#include "holberton.h"

/**
 * print_to_98 - Prints natural numbers to the count of 98
 * @n: parameter
 *
 * Return: 0 (result)
 */
void print_to_98(int n)
{
	int i, num, cnt;

	if (n > 98)
	{
		for (num = n; num != 98 - 1; num--)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
		}
	}
	if (n < 98 && n > 0)
	{
		for (cnt = n; cnt != 98 + 1; cnt++)
		{
			printf("%d", cnt);
			if (cnt != 98)
			{
				printf(", ");
			}
		}
	}
	if (n < 0 || n == 0)
	{
		for (i = n; i != 98 + 1; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	if (n == 98)
	{
		printf("%d", n);
	}
	printf("\n");
}
