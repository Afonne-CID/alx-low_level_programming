#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - function creates an array of chars, and initializes it with \
 * a specific char
 *@size: param 1
 *@c: param 2
 */
char *create_array(unsigned int size, char c)
{
	char *new;
	int i;

	if (size == '\0')
		return (NULL);

	new = malloc(sizeof(char) * size);
	
	if (new == NULL)
		return (NULL);

	for (i = 0; i < (int) size; i++)
	{
		new[i] = c;
	}
	return (new);
}
