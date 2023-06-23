#include "main.h"

/**
 *Print_numbers - print the numbers, from 0 to 9
 *@void : parameter of function
 */
void print_numbers(void)
{
char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
