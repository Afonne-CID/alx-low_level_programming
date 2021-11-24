#include "main.h"

/**
 * _strlen - Entry point of a function that returns the length of a string
 *
 * @s: Parameter to the function _strlen
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int count, i;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	return (count);
}
