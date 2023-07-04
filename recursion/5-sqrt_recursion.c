# include "main.h"

/**
 *_sqrt_recursion - function that returns the natural square root
 *@n: parameter of a function
 *Return: -1 if n does not have a natural root
 */
int _sqrt_recursion(int n)
{
	int sqrtroot;

	if (sqrtroot == n * n)
	{
		return (sqrtroot = _sqrt_recursion(n));
	}
	else if (sqrtroot != n * n)
	{
		return (-1);
	}
	return (0);
}
