#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node to a doubly linked list
 * @h: a doubly linked list
 * @idx: index to insert a new node
 * @n: element to add to doubly linked list
 *
 * Return: address of newly insert node (if successful), or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp = *h;
	unsigned int cnt = 0;

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if ((*h)->next != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (cnt != (idx - 1))
	{
		cnt++;
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;

	return (new);
}
