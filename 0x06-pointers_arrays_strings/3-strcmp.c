#include "holberton.h"

/**
 * _strcmp - this function compares two strings
 *
 * @s1: first pointer to character parameter
 * @s2: second pointer to char parameter
 *
 * Return: Always 0 (success)
 */
int _strcmp(char *s1, char *s2)
{
	int count;

	for (count = 0; s1[count] == s2[count]; count++)
	{
		if (s1[count] == '\0' && s2[count] == '\0')
		{
			return (0);
		}
	}

	return (s1[count] - s2[count]);
}
