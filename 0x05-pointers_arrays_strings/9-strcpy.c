#include "holberton.h"
#include <string.h>

/**
 * _strcpy - Function copies the string in the copied source
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
