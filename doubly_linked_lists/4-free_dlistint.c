#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: dlistint_t list to be freed
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *last;

	while (head)
	{
		last = head->next;
		free(head);
		head = last;
	}
}
