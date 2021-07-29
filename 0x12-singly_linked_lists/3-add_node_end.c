#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a node to the beggining  of a list
 * @head: pointer to pointer of the beginning of a list
 * @str: String to be added to the list
 *
 * Return: address of the newly added element or NULL if failure occurs
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *string_dup;
	list_t *new, *tail;

	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	string_dup = strdup(str);

	new->str = string_dup;
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = new;
	}

	return (*head);
}
