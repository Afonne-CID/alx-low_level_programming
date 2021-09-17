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

	if (*h == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
/*	while (cnt != (idx - 1))
	{
		cnt++;
		if (!tmp)
			return (NULL);
		tmp = tmp->next;
	}*/
	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
