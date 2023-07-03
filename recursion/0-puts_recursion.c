#include "main.h"

/**
 *_puts_recursion - function that prints a string followed by a new line
 *@s: parameter of a function
 *Return 0.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	_puts_recursion(s[i]);
	s++;
}
