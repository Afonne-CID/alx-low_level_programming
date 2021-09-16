#include "lists.h"

/**
 * free_dlistint - fress a doubly linked list
 * @head: a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head->prev)
	{
		while (head->prev)
		{
			free(head->prev);
			head = head->prev;
		}
	}
	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
