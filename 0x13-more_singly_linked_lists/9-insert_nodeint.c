#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node a give position
 * @head: pointer to pointer of the first node of a list
 * @idx: index of the list where the new node should be added
 * @n: element to be added to the new node
 *
 * Return: address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int index;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	tmp = *head;
	new->n = n;

	if (idx == 0)
	{
		new->next = tmp;
		*head = new;
		return (new);
	}

	n = 0;
	idx -= 1;
	index = 0;
	while (index != idx)
	{
		if (tmp->next == NULL)
			return (NULL);

		tmp = tmp->next;
		index++;
	}

	new->next = tmp->next;
	tmp->next = new;

	return (new);
}
