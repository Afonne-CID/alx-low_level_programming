#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * alloc_grid - func returns pointer to a 2 dimenstional array of integers
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: result based on outcome
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
	free(grid);
}
