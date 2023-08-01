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

	if (!(*head))
	{
		*head = new_node(str);
		return (*head);
	}

	new = new_node(str));
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * new_node - creates a new listint_t node.
 * @n: number to place inside the node.
 *
 * Return: pointer to the new node.
 */
static list_t *new_node(const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = str;
	new->next = NULL;
	return (new);
}
