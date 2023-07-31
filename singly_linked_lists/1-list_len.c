#include "lists.h"

/**
 *list_len - number of elements in a linked
 *@list_t: structure list
 *@h: pointers to the next node
 *Return: the numbers of elements in a linked list_t
 */
size_t list_len(const list_t *h)
{
	size_t i;

	while (h != '\0')
	{
		printf("%d\n", h->next);
		h = h->next;
		i++;
	}
	return (i);
}
