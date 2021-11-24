#include "main.h"

/**
 * _abs - Entry point
 *
 * @n: number to pass to function
 *
 * Return: Always 0
 */
int _abs(int n)
{
	int result;

	if (n >= 0)
	{
		result = n - 0;
		return (result);
	}
	else
	{
		result = n * -1;
		return (result);
	}
}
