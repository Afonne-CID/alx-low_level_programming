#include "holberton.h"

/**
 * more_numbers - Entry point
 *
 * Return: Always 0
 */
void more_numbers(void)
{
	int num;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				_putchar((num / 10) + 48);
			}
			if (num >= 0)
			{
				_putchar(num % 10 + '0');
			}
		}

		putchar('\n');
	}
}
