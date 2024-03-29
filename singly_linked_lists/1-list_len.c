#include "lists.h"

/**
 *list_len - number of elements in a linked
 *@h: pointers to the next node
 *Return: the numbers of elements in a linked
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
