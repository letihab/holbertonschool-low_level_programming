# include "main.h"
/**
 * find_root - calculates i**i to check with n.
 * @n: base number.
 * @i: iterator number.
 * Return: i.
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}
/**
 *_sqrt_recursion - function that returns the natural square root
 *@n: parameter of a function
 *Return: -1 if n does not have a natural root
 */
int _sqrt_recursion(int n)
{
       if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));

    return (0);
}
