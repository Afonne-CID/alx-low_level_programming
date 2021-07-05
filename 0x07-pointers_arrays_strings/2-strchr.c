#include "holberton.h"

/**
 * _strchr - function finds and returns a character in a string
 * @s: first parameter (containing string to find char in)
 * @c: second parameter (the string to be found in string)
 *
 * Return: character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}

	return ('\0');
}
