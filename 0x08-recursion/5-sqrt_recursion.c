#include "holberton.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: parameter
 *
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (0);
	if (n == 1)
		return (1);

	if (n / i != i && i != n)
	{
		return (1 + _sqrt_recursion(i));
	}
	return (-1);
}
