#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 * @head: the list to pop out from
 *
 * Return: the value of the popped node
 */
int pop_listint(listint_t **head)
{
	int survive;
	listint_t *tmp;

	if (*head == NULL)
		return (0);

	survive = (*head)->n;
	tmp = *head;
	*head = (*head)->next;

	free(tmp);

	return (survive);
}
