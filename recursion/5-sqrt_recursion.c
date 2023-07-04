# include "main.h"

/**
 *_sqrt_recursion - function that returns the natural square root
 *@n: parameter of a function
 *Return: -1 if n does not have a natural root
 */
int _sqrt_recursion(int n)
{
	int sqrtroot = 0;

	if (n * n == sqrtroot )
	{
		return (n);
	}
	else if (sqrtroot >= n * n)
	{
		return (_sqrt_recursion(sqrtroot; n + 1)
	}
		else
			return (-1);
	return (0);
}
