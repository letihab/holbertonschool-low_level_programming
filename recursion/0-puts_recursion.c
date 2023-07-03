#include "main.h"

/**
 *_puts_recursion - function that prints a string followed by a new line
 *@s: parameter of a function
 *Return 0.
 */
void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
}
