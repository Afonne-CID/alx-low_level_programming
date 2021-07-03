#include "holberton.h"

/**
 * print_alphabet_x10 - Entry point
 *
 */
void print_alphabet_x10(void)
{
	int alpha = 97;
	int  count;

	for (count = 0; count <= 9; count++)
	{
		for (alpha = 97; alpha <= 122; alpha++)
		{
			_putchar(alpha);
			if (alpha == 122)
			{
				_putchar('\n');
			}
		}
	}
}
