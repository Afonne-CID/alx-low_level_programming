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
	int twodigits;
	int tmp;

	for (count = 0; count < 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num >= 10)
			{
				for (twodigits = 0; twodigits < 2; twodigits++)
				{
					tmp = (twodigits == 0) ? num / 10 : num % 10;
					_putchar(tmp + '0');
				}
			}
			else
			{
				_putchar(num % 10 + '0');
			}
		}

		putchar('\n');
	}
}
