#include "holberton.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: first parameter - string
 * @accept: second parameter - characters to find
 *
 * Return: Returns (in bytes) of the initial segment of s which consistes \
 * entirely of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int j, cnt, yes = 0;

	cnt = 0;

	while (s[cnt] != ' ')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[cnt] == accept[j])
			{
				yes += 1;
			}
			j++;
		}
		cnt++;
	}
	return (yes);
}
