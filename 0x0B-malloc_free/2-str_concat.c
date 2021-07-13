#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: param 1
 * @s2: param 2
 *
 * Return: result
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, sum, z, count;

	for (i = 0; *(s1 + i) != '\0';)
	{
		i++;
	}
	for (j = 0; *(s2 + i) != '\0';)
	{
		j++;
	}

	sum = i + j;

	concat = malloc((sizeof(char) * sum) + 1);
	if (concat == NULL)
		return (NULL);
	count = 0;
	while (*(s1 + count) != '\0')
	{
		concat[count] = *(s1 + count);
		count++;
	}
	for (z = 0; *(s2 + z) != '\0'; z++)
	{
		concat[count + 1] = *(s2 + z);
	}

	concat[count + 1] = '\0';
	return (concat);
}
