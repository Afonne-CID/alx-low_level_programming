#include "holberton.h"

/**
 * reset_to_98 - Entry function
 *
 * @n: pointer parameter to pass to function
 */
void reset_to_98(int *n)
{
	int value = 70;

	n = &value;

	*n = 98;
}
