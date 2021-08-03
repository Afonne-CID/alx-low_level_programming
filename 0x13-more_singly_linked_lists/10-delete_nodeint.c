#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at an index of a list
 * @head: pointer to pointer to the first node of a list
 * @index: the index to be deleted
 *
 * Return: Status of execution (1 for success, -1 for failure)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp1, *tmp2;

	if (*head == NULL)
		return (-1);

	tmp1 = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			*head = (*head)->next;
			free(tmp1);
			return (1);
		}
	}

	index -= 1;
	i = 0;
	while (i < index)
	{
		i++;
		if (tmp1 == NULL || tmp1->next == NULL)
			return (-1);
		tmp1 = tmp1->next;
	}

	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	free(tmp2);

	return (1);

}
