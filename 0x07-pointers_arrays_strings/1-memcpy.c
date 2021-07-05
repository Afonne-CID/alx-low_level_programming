#include "holberton.h"

/**
 * _memcpy - function copies memory area
 * @s: parameter 1 (pointer to character) - the memory address to be filled
 * @b: parameter 2 (pointer to character) - the character to fill
 * @n: parameter 3 (pointer to integer) - the count of bits to be filled
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

