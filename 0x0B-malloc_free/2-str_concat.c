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
	int i, j, z, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; *(s1 + i) != '\0';)
	{
		i++;
	}

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		i++;
	}
	i++;

	concat = malloc((sizeof(char) * i) + 1);
	
	if (concat == NULL)
		return (NULL);
	
	count = 0;
	while (*(s1 + count) != '\0')
	{
		concat[count] = *(s1 + count);
		count++;
	}

	z = 0;
	while (*(s2 + z) != '\0')
	{
		concat[count] = *(s2 + z);
		z++;
		count++;
	}

	concat[count + 1] = '\0';
	return (concat);
}
