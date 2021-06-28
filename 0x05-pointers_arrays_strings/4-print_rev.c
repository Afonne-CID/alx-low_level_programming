#include "holberton.h"

/**
 * print_rev - Function prints any parse string to it in reverse order
 *
 * @s: the parameter of string type to be parsed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i;
	int length;

	length = _strlen(s);

	for (i = length; i <= s[0]; i--)
	{
		_putchar(s[i]);
	}	
	_putchar('\n');
}
