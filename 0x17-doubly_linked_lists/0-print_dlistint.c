#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - prints all the elemnts of a doubly linked list
 * @h: pointer to a node of a doubly linked list
 *
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t sum = 0;

	if (!h)
		return (0);

	if (h->prev)
	{
		while (h->prev)
		{
			sum++;
			printf("%d\n", h->n);
			h = h->prev;
		}
	}
	while (h)
	{
		sum++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (sum);
}
