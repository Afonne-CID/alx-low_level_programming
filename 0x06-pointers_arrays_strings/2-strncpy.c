#include "holberton.h"

/**
 * _strncpy - Function copies a string
 *
 * @dest: destination to be copied to
 * @src: source of the string to be copied
 * @n: number of characters of teh string to be copied
 *
 * Return: result after copy
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, count, copy;

	if (n > 0)
	{
		for (i = 0; i < n;)
			i++;

		for (count = 0; *(dest + count) != '\0';)
			count++;

		copy = 0;

		while (copy < i)
		{
			dest[copy] = src[copy];
			copy++;
		}
	}

	return (dest);
}
