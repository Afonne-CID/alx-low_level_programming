#include "holberton.h"

/**
 * print_last_digit - Entry point
 *
 * @n: Number of the last digit
 *
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n > 0)
	{
		last_digit = n % 10;
		_putchar(last_digit % 10 + '0');
	}
	else
	{
		last_digit = n % 10 * -1;
		_putchar(last_digit % 10 + '0');
	}

	return (last_digit);
}
