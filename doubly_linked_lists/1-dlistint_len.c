#include <stddef.h>
#include "lists.h"

/**
 *dlistint_len - returns the number of elements in a linked
 *@h: singly list to print
 *Return: the number of node
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
