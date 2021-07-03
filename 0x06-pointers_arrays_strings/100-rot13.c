#include "holberton.h"

/**
 * rot13 - converts string to ROT13
 * @str: the string parameter to be passed
 *
 * Return: result
 */
char *rot13(char *str)
{
	int i, cnt;
	char skip_this[] = {45, 49, 51, 92, 32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (cnt = 0; skip_this[cnt] != '\0'; cnt++)
		{
			if (str[cnt] != skip_this[cnt])
				str[i] += 13;
		}
	}

	return (str);
}
