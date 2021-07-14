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
	int i, count;
	char *newcpy;

	if (str == NULL)
		return (NULL);
	for (count = 0; str[count] != '\0';)
	{
		++count;
	}

	newcpy = malloc(sizeof(char) * count + 1);

	if (newcpy == NULL)
		return (NULL);

	for (i = 0; i < count; i++)
	{
		newcpy[i] = str[i];
	}

	return (newcpy);
}
