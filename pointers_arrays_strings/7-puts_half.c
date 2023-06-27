# include "main.h"
# include "2-strlen.c"

/**
 *puts_half - function that prints half of a string
 *@str: parameter of a function
 *return 0;
 */
void puts_half(char *str)
{
	int l = _strlen(str);
	int i;

/**	if (l % 2 == 1)
                {
                        l = l + 1;
		}
*/
	for (i = l / 2; i < l ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
