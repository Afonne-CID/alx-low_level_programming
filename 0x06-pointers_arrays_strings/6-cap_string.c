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
	int cnt;
	char separators[] = {54, 32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 0 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}

		for (cnt = 0; separators[cnt] != '\0'; cnt++)
		{
			if ((str[i] == separators[cnt]) && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
			}
		}
	}
	return (str);
}
