#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * free_grid - func frees dynamic memory
 * @grid: param 1
 * @height: param 2
 *
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid[i] == NULL)
	{
		for (i = i - 1; i >= 0; i--)
		{
			free(grid[i]);
		}
		free(grid);
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
