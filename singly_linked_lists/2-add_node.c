#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *add_node - add a new node at the beginning of a list_t
 *@head: the first node
 *@str: parameter of a function
 *Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
