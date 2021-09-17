#include "lists.h"

/**
 * free_dlistint - fress a doubly linked list
 * @head: a doubly linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
