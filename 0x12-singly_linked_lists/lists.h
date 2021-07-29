#ifndef LISTS_H
#define LISTS_H

int _putchar(char c);

/**
 * list - a structure for our single-linked list
 * @str: 1 member of string type
 * @len: 2 member of integer type
 * @next: referential pointer to the next node in the list
 *
 * list_t: an abbreviation for our structure;
 */
typedef struct list
{
	char *str;
	unsigned int len;
	struct list *next;
} list_t;

int _putchar(char c);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
