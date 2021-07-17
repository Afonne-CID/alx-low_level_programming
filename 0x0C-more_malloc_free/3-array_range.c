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
	int i;
	int *grid;

	if (min > max)
		return (NULL);
	grid = malloc(sizeof(int) * (max - min + 1));
	if (grid == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
	{
		grid[i] = min;
		min++;
	}
	return (grid);
}
