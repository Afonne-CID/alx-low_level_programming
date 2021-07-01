#include "holberton.h"
#include <stdio.h>

/**
 * reverse_array - func reverses the content of an array of \
 * integers
 * @a: array of type, pointer to integer, to be passed
 * @n: parameter to pass the number of elements
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int i, tmp, add;

	tmp = 0;
	add = n - 1;

	for (i = 0; i < add; i++)
	{
		tmp = a[add];
		a[add] = a[i];
		a[i] = tmp;

		add--;
	}
}
