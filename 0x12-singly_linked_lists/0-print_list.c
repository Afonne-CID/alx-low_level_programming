#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: list to be printed
 *
 * Return: Size of list
 */
size_t print_list(const list_t *h)
{
	size_t cnt = 0;

	while (h)
	{
		cnt++;
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}
	return (cnt);
}
