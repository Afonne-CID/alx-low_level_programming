#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns number of elements of a list
 * @h: list to be counted
 *
 * Return: Number of elements  of a list
 */
size_t list_len(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		h = h->next;
	}
	return (cnt);
}
