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
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (index == 0 && *head)
	{
		if ((*head)->next)
		{
			*head = (*head)->next;
			(*head)->prev = NULL;
			free(last);
		}
		else
			*head = NULL;
		return (1);
	}
	while (i < index - 1 && current)
	{
		current = current->next;
		i++;
	}
	if (current)
	{
		last = current->next;
		if (last->next)
			last->next->prev = current;
		current->next = last->next;
		free(last);
		return (1);
	}
	return (-1);
}
