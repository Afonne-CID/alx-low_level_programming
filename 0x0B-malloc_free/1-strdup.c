#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory containing\
 *  duplicate of string in parameter.
 *  @str: paramater to supply string
 *
 *  Return: pointer to duplicate of string
 */
char *_strdup(char *str)
{
	int i, n = _strlen(str);

	char *newcpy = malloc(sizeof(char) * n);

	if (newcpy == NULL)
		return (NULL);
	if (*str == '\0')
		return (NULL);
	for (i = 0; i < n; i++)
	{
		newcpy[i] = str[i];
	}

	return (newcpy);
}
