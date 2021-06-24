#include "holberton.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int minute1;
	int minute2;

	for (minute1 = 0; minute1 <= 23; minute1++)
	{
		for (minute2 = 0; minute2 <= 59; minute2++)
		{
			_putchar(minute1 / 10 + '0');
			_putchar(minute1 % 10 + '0');
			_putchar(58);
			_putchar(minute2 / 10 + '0');
			_putchar(minute2 % 10 + '0');
			_putchar('\n');
		}
	}

}
