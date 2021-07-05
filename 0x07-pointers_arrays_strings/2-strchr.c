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
	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		if (s[cnt] == c)
		{
			return (&s[cnt]);
		}
	}
	
	return ('\0');
}
