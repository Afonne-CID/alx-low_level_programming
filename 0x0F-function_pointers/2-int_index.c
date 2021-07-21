#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to be searched
 * @size: size of array
 * @cmp: poi function pointer
 *
 * Return: Search result
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	i = 0;
	while (size-- > 0)
	{
		i++;
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
