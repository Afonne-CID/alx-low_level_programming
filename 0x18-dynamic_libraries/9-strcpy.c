#include "main.h"
#include <stdio.h>

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
	int count;

	for (i = 0; *(src + i) != '\0';)
	{
		++i;
	}

	for (count = 0; count < i;)
	{
		dest[count] = src[count];
		count++;
	}

	dest[count] = '\0';

	return (dest);
}
