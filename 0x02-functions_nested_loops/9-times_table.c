#include "holberton.h"

/**
 * times_table - prints the 9 times table
 * Return: Always success (0)
 */
void times_table(void)
{
	int i, cnt, multi, times = 9;

	for (i = 0; i <= times; i++)
	{
		for (cnt = 0; cnt <= times; cnt++)
		{
			multi = i * cnt;
<<<<<<< HEAD:9-times_table.c
			if (multi >= 10)
=======
<<<<<<< HEAD:9-times_table.c
			if (multi >= 10)
=======
			if (multi > 10)
>>>>>>> d96f23f8f50f6a6e147b6ac3f5f29513ff66c0e2:0x02-functions_nested_loops/9-times_table.c
>>>>>>> 34110d833872e1d0cb66f505c93b9ff934528459:0x02-functions_nested_loops/9-times_table.c
			{
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');

				if (cnt != times)
				{
					_putchar(',');
					_putchar(9);
				}
				else
				{
					_putchar('\n');
				}
			}
			else
			{
				_putchar(multi % 10 + '0');
				if (cnt != times)
				{
					_putchar(',');
					_putchar(9);
				}
				else 
				{
					_putchar('\n');
				}
			}
		}
		_putchar('\n');
	}
}
