#include "holberton.h"

/**
 * _islower - check the code for ALX School students.
 *
 * @c: Character to pass to _islower function
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if ((c >= 98) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
