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
	char *new_ptr, *tmp;
	unsigned int i;

	tmp = ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (ptr);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
			return (ptr);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc((new_size - old_size) + old_size);
		if (new_ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		
		i = 0;
		while (i < old_size && i < new_size)
		{
			new_ptr[i] = tmp[i];
			i++;
		}
	}

	return (new_ptr);
}
