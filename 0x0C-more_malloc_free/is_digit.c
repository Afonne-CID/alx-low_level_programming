#include "holberton.h"

/** 
 * is_digit - checks a string for digits
 * @s: the string parameter
 *
 * Return: answer
 */
int is_digit(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 48 || s[i] <= 57)
			return (0);
		else
			return (1);
	}
}
