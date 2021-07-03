#include "holberton.h"

/**
 * mul - Entry point
 *
 * @a: First paramater to pass to function
 * @b: Second paramater to pass to function
 *
 * Return: Always 0
 */
int mul(int a, int b)
{
	int result;

	if (((a * 2) / 2) == a || ((b * 2) / 2) == a)
	{
		result = a * b;
		return (result);
	}
	else
	{
		return (0);
	}
}
