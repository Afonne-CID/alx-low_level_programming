#include "holberton.h"

/**
 * swap_int - Entry point- This function swaps the values of two integers
 *
 * @a: Parameter one for the function
 * @b: Parameter two to be passed to the function
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
