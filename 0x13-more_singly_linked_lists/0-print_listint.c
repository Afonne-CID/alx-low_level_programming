#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints integer elements of a singly link list
 * @h: pointer to the first node of the list
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (cnt);
}
