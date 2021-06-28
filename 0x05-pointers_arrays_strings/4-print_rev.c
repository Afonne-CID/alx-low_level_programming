#include "holberton.h"
#include <stdio.h>

/**
 * print_rev - Function prints any parse string to it in reverse order
 *
 * @s: the parameter of string type to be parsed
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int aux = 0;
	char ltemp;

	while (*(s + i) != '\0')
		i += 1;
	i -= 1;

	while (aux < i)
	{
		ltemp = s[i];
		s[i] = s[aux];
		s[aux] = ltemp;
		aux++;
		i--;
	}
}
