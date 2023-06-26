# include "main.h"
# include "2-strlen.c"
/**
 *puts2 - function that print other character of a string
 *@str : parameter of the function
 *return 0;
 */
void puts2(char *str)
{
	int i = _strlen(str);
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
	
