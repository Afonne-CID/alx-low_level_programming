#include "holberton.h"

/**
 * factorial - returns the factorial of a give number
 * @n: parameter containing the factorial
 *
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (factorial(n * (n - 1)));
}
