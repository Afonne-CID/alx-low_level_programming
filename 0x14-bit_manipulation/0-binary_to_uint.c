#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number(s) to unsigned int.
 * @b: string (pointer to) chars.
 *
 * Return: the converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted_int = 1;
	unsigned int num = 0;
	int length = 0;

	if (b == NULL)
		return (0);

	for (; b[length];)
		length++;

	length -= 1;
	
	for (; length >= 0; length--)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);

		num += (b[length] - '0') * converted_int;
		converted_int *= 2; 
	}

	return (num);
}
