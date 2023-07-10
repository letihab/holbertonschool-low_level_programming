#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of int
 *@width: largeur to array
 *@height: height of the array
 *Return: NULL if width or height is 0 or negative
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **a;

	if (width + height < 2 || width < 1 || height < 1)
		return (NULL);

	a = malloc(height * sizeof(*a));
	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(**a));
		if (a[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(a[i]);
			free(a);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	}

	return (a);
}
