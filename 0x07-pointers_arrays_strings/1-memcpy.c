#include "holberton.h"

/**
 * _memcpy - function copies memory area
 * @dest: parameter 1 (pointer to character) - memory address to be copied to
 * @src: parameter 2 (pointer to character) - the character to copy from
 * @n: parameter 3 (pointer to integer) - the count of bits to be copied
 *
 * Return: Result
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		dest[cnt] = src[cnt];
	}

	return (dest);
}

