#include <stdlib.h>
#include "holberton.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter
 *
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	int *allocator;

	allocator = malloc(b);
	if (allocator == NULL)
	{
		exit(98);
	}
	return (allocator);
}
