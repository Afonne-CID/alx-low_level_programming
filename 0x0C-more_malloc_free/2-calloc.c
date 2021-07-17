#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: paramater 1- number of elements of array
 * @size: size in bytes of the array
 *
 * Return: result
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int *grid;

	if (nmemb == 0 || size == 0)
		return (NULL);
	grid = malloc(sizeof(size) * nmemb + 1);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		grid[i] = 0;
	}
	return (grid);
}
