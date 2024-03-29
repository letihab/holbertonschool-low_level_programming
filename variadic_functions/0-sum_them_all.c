#include "variadic_functions.h"

/**
 *sum_them_all - function that returns the sum of all its parameters
 *@n: unsigned int
 *Return: 0 if n equal 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list args;
	unsigned int i = 0;

	if (n != 0)
	{
		va_start(args, n);

		while (i < n)
		{
			sum += va_arg(args, int);
			i++;
		}

		va_end(args);
		return (sum);
	}

	return (0);
}
