#include "main.h"

/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	unsigned int i;

	for (n = 0, i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			n = (n << 1) | 1;
		else if (b[i] == '0')
			n <<= 1;
		else if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	return (n);
}
