#include "function_pointers.h"

/**
 * array_iterator - function iterates through an array
 * @array: array to be iterated on
 * @size: size of array
 * @action: pointer to function (array_iterator);
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == 0)
		return;

	i = 0;
	while (size-- > 0)
	{
		action(array[i++]);
	}
}
