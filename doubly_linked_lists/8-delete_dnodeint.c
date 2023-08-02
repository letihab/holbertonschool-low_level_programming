#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a linked list at index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *last = *head;
	dlistint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(last);
		return (1);
	}
	while (i < index - 1)
	{
		if (!last || !(last->next))
			return (-1);
		last = last->next;
		i++;
	}

	current = last->next;
	last->next = current->next;
	free(current);

	return (1);
}
