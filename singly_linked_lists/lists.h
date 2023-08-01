#ifndef _LISTS_H
#define _LISTS_H
#include <stdio.h>
#include <stddef.h>

/**
 *struct list_t - singly linked list
 *@len:integer
 *@str: print string
 *@next: points to the next node
 */
typedef struct list_t
{
	char *str;
	int len;
	struct list_t *next;
} list_t;
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);
list_t *new_node(const char *str);

#endif
