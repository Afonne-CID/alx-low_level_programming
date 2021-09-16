#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts number of elements in a linked list
 * @h: a doubly linked list
 *
 * Return: the number of elements in a linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t sum = 0;

	while (h)
	{
		sum++;
		h = h->next;
	}
	return (sum);

}
