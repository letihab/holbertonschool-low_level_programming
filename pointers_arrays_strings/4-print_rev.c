# include "main.h"

/**
 *print_rev - function that prints a string,in reverse followed by new line
 *@s: parameter of function
 *return 0.
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
