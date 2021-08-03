#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the list to search for an index
 * @index: the index of the node we seek
 *
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (i != index)
	{
		i++;
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
