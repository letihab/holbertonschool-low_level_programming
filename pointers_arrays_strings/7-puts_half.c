# include "main.h"
# include "2-strlen.c"

/**
 *puts_half - function that prints half of a string
 *@str: parameter of a function
 *return 0;
 */
void puts_half(char *str)
{
	int i, j;

	i = 0;
	while (str[i] != '\0')
		i++;

	j = i / 2;

	if (i % 2 == 1)
		j++;

	while (j < i)
	{
		_putchar(str[i]);
		j++;
	}
	_putchar('\n');
}
