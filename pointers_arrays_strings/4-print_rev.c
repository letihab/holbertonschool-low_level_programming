# include "main.h"
# include "2-strlen.c"

/**
 *print_rev - function that prints a string,in reverse followed by new line
 *@s: parameter of function
 *return 0.
 */
void print_rev(char *s)
{
	int i = _strlen(*s) -1;

	while (s[i] >=0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
