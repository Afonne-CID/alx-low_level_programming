#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc
 * @:ptr: previously allocated memroyi
 * @old_size: size of the previous allocation
 * @new_size: new size to be reallocated
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(sizeof(unsigned int) * new_size);
		if (ptr == NULL)
			return (NULL);
	}
	if (new_size > old_size)
	{
		ptr = malloc(sizeof(unsigned int) * old_size * new_size + 1);
		if (ptr == NULL)
			return(ptr);
	}
	if ((new_size = 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	return (ptr);
}
