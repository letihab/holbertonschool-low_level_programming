# include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 *@a: parameter of function
 *@b: parameter of function
 *return 0.
 */
void swap_int(int *a, int *b)
{
	int c;
        c = *a;
	*a = *b;
	*b = c;
}
