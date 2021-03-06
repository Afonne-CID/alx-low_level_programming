#include "main.h"

/**
 * _strstr - locates substring
 * @haystack: first parameter
 * @needle: second parameter
 *
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, cnt;

	i = 0;

	while (haystack[i] != '\0')
	{
		cnt = 0;
		while (needle[cnt] != '\0')
		{
			if (needle[cnt] != haystack[i + cnt])
			{
				break;
			}
			cnt++;
		}

		if (needle[cnt] == '\0')
		{
			return (&haystack[i]);
		}

		i++;
	}
	return ('\0');
}
