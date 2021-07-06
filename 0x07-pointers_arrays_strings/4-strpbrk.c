#include "holberton.h"

/**
 * _strpbrk - searches and returns first occurence of a byte from a string
 * @s: first param
 * @accept: second param
 *
 * Return: result
 */
char *_strpbrk(char *s, char *accept)
{
	int i, cnt;

	i = 0;

	while (s[i] != '\0')
	{
		cnt = 0;
		while (accept[cnt] != '\0')
		{
			if (s[i] == accept[cnt])
			{
				return (&s[i]);
			}
			cnt++;
		}
		i++;
	}
	return ('\0');
}
