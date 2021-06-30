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
	int source;

	for (i = 0; *(dest + i) != '\0';)
	{
		++i;
	}

	for (count = 0; *(src + count) != '\0';)
	{
		dest[++i] = src[count++];
	}

	dest[++i]  '\0';

	return (dest);
}
