#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a specified index
 *
 * @head: Double pointer to a doubly linked list
 * @index: Index of a node to delete
 *
 * Return: 1 on success, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;

	if (!(*head))
		return (-1);

	tmp = *head;
	
	for (; index != 0; index--)
	{
		if (!tmp)
			return (-1);
		tmp = tmp->next;
	}

	if (index == 0)
	{
		*head = tmp->next;
		if (*head)
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
