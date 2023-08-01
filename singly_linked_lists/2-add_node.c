#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 *new_node -function that add new node
 */
list_t *new_node(const char *str);

/**
 *add_node - add a new node at the beginning of a list_t
 *@head: the first node
 *@str: parameter of a function
 *Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
        list_t *new;

        if (!str)
                return (NULL);

        new = new_node(str);
        if (!new)
                return (NULL);

        new->next = *head;
        *head = new;
        return (new);
}

/**
 * new_node - creates a new list_t node.
 * @str: string to place inside the node.
 *
 * Return: pointer to the new node.
 */
list_t *new_node(const char *str)
{
        list_t *new;

        new = malloc(sizeof(list_t));
        if (!new)
                return (NULL);

        new->name = strdup(str);
        if (!(new->name)) {
                free(new);
                return (NULL);
        }

        new->n = 0;
	new->next = NULL;
        return (new);
}
