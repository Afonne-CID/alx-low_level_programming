#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * argstostr - concatenates all the arguments supplied to the program
 * @ac: param 1
 * @av: param 2
 *
 * Return: result
 */
char *argstostr(int ac, char **av)
{
	int j, i, len, z;
	char *conc_str;

	len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	conc_str = malloc(sizeof(char *) * ac);
	if (conc_str == NULL)
		return (NULL);

	for (z = 0; av[j][z] != '\0'; z++)
	{
		len++;
	}

	for (j = 0; j < ac; j++)
	{
		conc_str[j] = malloc((sizeof(char) * len) + 1);
		if (conc_str == NULL)
		{
			for (len = len - 1; len >= 0; len--)
			{
				free(conc_str[len]);
			}
			free(conc_str);
			return (NULL);
		}

		for (i = 1; av[j][i] != '\0'; i++)
		{
			conc_str[j][i] = av[j][i];
		}
		_putchar('\n');
	}
	return (conc_str);
}
