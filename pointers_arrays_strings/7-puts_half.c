# include "main.h"
# include "2-strlen.c"

/**
 *puts_half - function that prints half of a string
 *@str: parameter of a function
 *return 0;
 */
void puts_half(char *str)
{
	int i =_strlen(str);

	for (; i / 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
