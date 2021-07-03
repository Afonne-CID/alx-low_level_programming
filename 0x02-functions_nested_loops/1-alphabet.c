#include "holberton.h"

/**
 * print_alphabet - Entry point
 *
 */
void print_alphabet(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		_putchar(alpha);
		alpha++;
	}

	_putchar('\n');
}
