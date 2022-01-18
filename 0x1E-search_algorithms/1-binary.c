#include <stdio.h>

/**
 * binary_search - Searches for a value in a sorted array of integers
 *                 using the Binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in @array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 for NULL @array or not found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t index, start = 0, end = size - 1;

	if (!array)
		return (-1);

	for (; end >= start;)
	{
		printf("Searching in array: ");
		print_array(array, start, end);

		index = start + (end - start) / 2;
		if (array[index] == value)
			return (index);
		else if (array[index] > value)
			end = index - 1;
		else
			start = index + 1;
	}

	return (-1);
}


/**
 * print_array - Prints an array
 * @array: Pointer to array to print
 * @start: The index to start to print
 * @stop: The index to stop to print
 */
void print_array(int *array, size_t start, size_t stop)
{
	size_t i = start;

	while (array && i <= stop)
	{
		printf("%d", array[i]);
		if (i != stop)
			printf(", ");
		i++;
	}
	printf("\n");
}
