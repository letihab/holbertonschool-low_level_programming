#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node
 *@head: first node in the linked list
 *@index: index of the node to return
 *Return: 0 if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *last = head;

	while (last && i < index)
	{
		last = last->next;
		i++;
	}

	return (last ? last : NULL);
}
