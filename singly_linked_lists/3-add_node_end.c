#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node_end - add node at the end of linked list
 *@head: double pointer to a linked list
 *@str: string to add to the new node
 *Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_end, *tmp;

	if (str == NULL)
		return (NULL);
	add_end = malloc(sizeof(list_t));

	if (add_end == NULL)
		return (NULL);
	add_end->str = strdup(str);

	if (add_end->str == NULL)
	{
		free(add_end);
		return (add_end);
	}
	add_end->len = strlen(add_end->str);
	add_end->next = NULL;
	if (*head == NULL)
	{
		*head = add_end;
		return (add_end);
	}
	tmp = *head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = add_end;

	return (add_end);
}
