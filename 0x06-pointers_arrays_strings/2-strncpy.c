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
	int count;

	for (count = 0; *(dest + count) != '\0' && count < n;)
	{
		dest[count] = src[count];
		count++;
	}

	while (count < n)
	{
		dest[count] = '\0';
		count++;
	}

	return (dest);
}
