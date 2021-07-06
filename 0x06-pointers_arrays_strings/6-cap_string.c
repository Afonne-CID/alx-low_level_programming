#include "holberton.h"

/**
 * cap_string - Capitalize each word
 * @str: string parameter to work on
 *
 * Return: result
 */
char *cap_string(char *str)
{
	int i, j;
	char separators[] = {9, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	while (str[i] != '\0')
	{
		j = 0;

		while (separators[j] != '\0')
		{
			if (str[i] == separators[j] && str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] -= 32;
			}
			j++;

			if (str[i] == 9)
				str[i] = 32;
		}
		i++;
	}
	return (str);
}
