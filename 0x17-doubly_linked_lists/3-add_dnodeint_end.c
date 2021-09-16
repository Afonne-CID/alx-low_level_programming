#include "lists.h"

/**
 * add_dnodeint_end - adds note to the end of a doubly linked list
 * @head: a doubly linked list
 * @n: element to add to a doubly linked list
 *
 * Return: address of the newly added element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *tmp = *head;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
	new->prev = tmp;

	return (new);
}
