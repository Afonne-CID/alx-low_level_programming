#include "main.h"

/**
 * _memset - function fills memory with a constant byte
 * @s: parameter 1 (pointer to character) - the memory address to be filled
 * @b: parameter 2 (pointer to character) - the character to fill
 * @n: parameter 3 (pointer to integer) - the count of bits to be filled
 *
 * Return: Result
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cnt;

	for (cnt = 0; cnt < n; cnt++)
	{
		s[cnt] = b;
	}

	return (s);
}
