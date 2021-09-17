#include "lists.h"

/**
 * get_dnodeint_at_index - gets the node at an index
 * @head: a doubly linked list
 * @index: node index
 *
 * Return: node or NULL if unsuccessful
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int cnt = 0;

	if (!head)
		return (NULL);

	while (cnt != index)
	{
		cnt++;
		if (head == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	return (tmp);
}
