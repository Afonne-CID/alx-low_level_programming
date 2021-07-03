#include "holberton.h"

/**
 * _isdigit - check the code for ALX School students.
 *
 * @c: Character to pass to _islower function
 *
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
		else
	{
		return (0);
	}
}
