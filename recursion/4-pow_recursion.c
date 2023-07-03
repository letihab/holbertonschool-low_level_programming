#include "main.h"

/**
 *_pow_recursion - function that return the value of x raised power of y
 *@x: parameter of a funnction
 *@y: parameter of a function
 *Return: -1 if y < 0.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	else
		return (1);
	return (0);
}
