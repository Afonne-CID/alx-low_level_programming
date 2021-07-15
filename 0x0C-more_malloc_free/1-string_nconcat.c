#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes to copy
 *
 * Return: result
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i, j, z, count;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; *(s1 + i) != '\0';)
		i++;
	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		i++;
	}
	concat = malloc(sizeof(char) * i);
	if (concat == NULL)
		return (NULL);
	count = 0;
	while (*(s1 + count) != '\0')
	{
		concat[count] = *(s1 + count);
		count++;
	}
	z = 0;
	while (*(s2 + z) != '\0' && z < (int) n)
	{
		concat[count] = *(s2 + z);
		z++;
		count++;
	}
	concat[count + 1] = '\0';
	return (concat);
}
