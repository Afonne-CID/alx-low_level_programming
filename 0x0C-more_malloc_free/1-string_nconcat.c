#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int i, j, count;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

        for (i = 0; *(s1 + i) != '\0';)
                i++;
        for (j = 0; *(s2 + j) != '\0'; j++)
                i++;
        i++;
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
        while (*(s2 + z) != '\0' && z < n)
        {
                concat[count] = *(s2 + z);
                z++;
                count++;
        }
        concat[count + 1] = '\0';

	return (concat);
}
