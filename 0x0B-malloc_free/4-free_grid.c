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
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
