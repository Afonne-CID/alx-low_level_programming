#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - reallocates a memory block using malloc
 * @ptr: previously allocated memroyi
 * @old_size: size of the previous allocation
 * @new_size: new size to be reallocated
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr != NULL)
	{
		if (new_size == 0)
		{
			free(ptr);
			return (ptr);
		}
		if (new_size > old_size)
		{
			ptr = malloc((new_size - old_size) + old_size);
		}
	}
	else
	{
		ptr = malloc(new_size);
			return (ptr);
	}
	return (ptr);
}
