# include "main.h"
# include "2-strlen.c"
/**
 *puts2 - function that print other character of a string
 *@str : parameter of the function
 *return 0;
 */
void puts2(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
