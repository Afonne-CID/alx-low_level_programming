#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all the data of a list
 * @head: the list elements are to be summed
 *
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
