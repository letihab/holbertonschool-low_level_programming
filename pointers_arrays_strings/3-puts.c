# include "main.h"

/**
 *_puts - function that prints a string, followed by new lines stdout
 *@str: parameter of function
 *return 0.
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != 0)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
