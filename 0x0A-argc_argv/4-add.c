#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - Entry point
 * @argc: first param
 * @argv: second parma
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, cnt, sum;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (cnt = 0; argv[i][cnt] != '\0'; cnt++)
		{
			if (argv[i][cnt] < 47 || argv[i][cnt] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
