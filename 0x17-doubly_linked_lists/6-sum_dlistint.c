#include "lists.h"

/**
 * sum_dlistint - sums the values of a doubly linked list
 * @head: a doubly linkd list
 *
 * Return: sum of all the data of a doubly linked list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (!head)
		return (0);

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
