#include "holberton.h"

/**
 * is_prime_number - checks for primes
 * @n: parameter
 *
 * Return: result
 */
int is_prime_number(int n)
{
	int i = 0;

	n = n - 1;

	if (n / i == 0)
	{
		return (0);
	}
	return (is_prime_number(i + 1));
}
