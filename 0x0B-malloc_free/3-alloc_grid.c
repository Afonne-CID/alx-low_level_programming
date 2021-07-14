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
	int i, j, cnt, **grid;

	if (width || height <= 0)
		return (NULL);

	cnt = height * width;
	cnt++;

	grid = malloc(sizeof(int) * cnt);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[j]= 0;
		}
		printf("\n");
	}

	return (grid);
}
