#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - Reverses the order of a list
 * @head: the list to be reversed
 *
 * Return: A pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *first, *last;

	if (*head == NULL)
		return (NULL);

	last = NULL;
	while ((*head)->next != NULL)
	{
		first = (*head)->next;
		(*head)->next = last;
		last = *head;
		*head = first;
	}
	(*head)->next = last;

	return (*head);
}
