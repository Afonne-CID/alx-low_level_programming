#include "holberton.h"

/**
 * _isupper - check the code for ALX School students.
 *
 * @c: Character to pass to _islower function
 *
 * Return: Always 0.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
