#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *print_list - function that prints all the elements of a list_t
 *@list_t: list to print,
 *@h: parameter of a function
 *Return: the number of nodes,
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%i] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}

	return (i);
}
