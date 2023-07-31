#ifndef _LISTS_H
#define _LISTS_H
#include <stdio.h>
#include <stddef.h>

/**
 *struct list_s singly linked list
 *@n:integer
 *@next: points to the next node
 */
typedef struct list_t
{
	int n;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);

#endif
