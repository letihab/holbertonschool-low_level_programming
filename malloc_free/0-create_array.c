#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that creates an array of chars
 * @size: size of array
 *@c: specific characters
 *Return: NUll if size is zero
 */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
