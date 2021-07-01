#include "holberton.h"

/**
 * string_toupper - function to change all lowercase to uppercase
 * @str: string to uppercase
 *
 * Return: result
 */
char *string_toupper(char *str)
{
	int i, count;

	count = 0;

	for (i = 0; str[count] != '\0'; count++)
	{
		if (str[count] >= 'a' && <= 'z')
		{
			str[count] -= 32;
		}
	}
	return (str);
}
