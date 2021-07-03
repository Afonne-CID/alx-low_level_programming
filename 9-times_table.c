#include "holberton.h"

/**
 * times_table - prints the 9 times table
 * 
 *Return: Always success (0)
 */
void times_table(void)
{
	int i, cnt, multi, times;

	times = 9;

	for (i = 0; i <= times; i++)
	{
		for (cnt = 0; cnt <= times; cnt++)
		{
			multi = i * cnt;
			
			_putchar(multi % 10 = 0 ? multi / 10 : );

			_putchar(multi % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
