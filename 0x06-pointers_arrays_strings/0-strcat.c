#include "holberton.h"

/**
 * _strcat - Function for concatenation
 *
 * @dest: Destination string to be concatenated
 * @src: Source of the string to be concatenated
 *
 * Return: result of concatenation
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int count;
	int copy;

	for (i = 0; *(dest + i) != '\0';)
	{
		i++;
	}

	for (count = 0; *(src + count) != '\0';)
	{
		count++;
	}

	copy = 0;

	while (copy < count)
	{
		dest[i] = src[copy];
		copy++;
		i++;
	}

	return (dest);
}
