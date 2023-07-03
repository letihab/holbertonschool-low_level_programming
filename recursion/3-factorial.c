#include "main.h"

/**
 *factorial - function that returns the factorial of given number
 *@n: parameter of number
 *Return: -1 if n < 0 to indicate an error
 */
int factorial(int n)
{
	int number = 0;

	if (n < 0)
	{
		return ( -1 );
	}
	number = number * (number - 1);

	factorial(n +1);
}
