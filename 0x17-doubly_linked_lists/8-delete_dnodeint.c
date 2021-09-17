#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a specified index
 * @head: a doubly linked list
 * @index: index of a node
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int cnt = 0;

	if (*head == NULL)
		return (-1);

	while (cnt != index)
	{
		cnt++;
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}

	if (tmp == *head)
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		tmp->prev->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);
}
