#include "holberton.h"

/**
 * _strncat - Function concatenates a specified number from source to destination
 *
 * @dest - destination string
 * @src - source string
 *
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, count, copy;

	if (n > 0)
	{

		for (i = 0; *(src + i) != '\0' && (i < n);)
		{
			i++;
		}	

		for (count = 0; *(dest + count) != '\0';)
		{
			count++;
		}

		copy = 0;

		while (copy < i)
		{
			dest[count] = src[copy];
			copy++;
			count++;
		}
	}

	return (dest);
}
