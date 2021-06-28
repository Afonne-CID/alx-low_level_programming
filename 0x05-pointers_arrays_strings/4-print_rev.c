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
	int length;
	int i;
	int lastC;
	int count, firstC;

	for (length = 0; *(s + length) != '\0'; length++)
	{
		i++;
	}
	i -= 1;

	firstC = 0;
	count = 0;
	lastC = 0;

	while (count < i)
	{
		lastC = s[i];
		s[i] = s[count];
		s[firstC] = s[i];
		i--;
		count++;
	}
}
