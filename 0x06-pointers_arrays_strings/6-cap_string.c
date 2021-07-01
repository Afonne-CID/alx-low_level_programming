#include "holberton.h"

/**
 * cap_string - Capitalize each word
 * @str: string parameter to work on
 *
 * Return: result
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			str[i] -= 32;
		}
		else if (str[i] == ' ')
		{
			str[i + 1] -= 32;
		}
		else
		{
			if ((str[i] >= 'A') && (str[i] <= 'Z'))
			{
				str[i] += 32;
			}
		}
	}
	return (str);
}
