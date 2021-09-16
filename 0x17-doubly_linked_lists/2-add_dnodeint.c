#include "lists.h"

/**
 * add_dnodeint - adds new node at the beginning of a doubly linked list
 * @head: double pointer to a doubly linked list
 * @n: value to add to a doubly linked list
 *
 * Return: address of the new element, or NULL if unsuccessful
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
