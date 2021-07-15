#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - creates an array of integers
 * @min: paramater 1- the beginning of the range
 * @max: the max of the range
 *
 * Return: result
 */
int *array_range(int min, int max)
{
	int i, j, z = 0;
        int *grid;

	if (min > max)
		return (NULL);
	for (j = min; j < max; j++)
	{
		i++;
	}
	i++;
	grid = malloc(sizeof(int) * i);
	if (grid == NULL)
		return (NULL);
	for (i = min; i < max + 1; i++)
	{
		grid[z] = i;
		z++;
	}
	return (grid);
}
