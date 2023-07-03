#include "main.h"

/**
 *factorial - function that returns the factorial of given number
 *@n: parameter of number
 *Return: -1 if n < 0 to indicate an error
 */
int factorial(int n)
{
	if (n < 0)
	{
		return(- 1);
	}
	else if (n > 0)
	{
		return(n = n * (n - 1));
	}
	else
		return(1);
       factorial(n + 1);

	return (0);
}
