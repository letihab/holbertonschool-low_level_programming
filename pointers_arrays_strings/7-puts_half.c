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

	if (l % 2 == 1)
		l = l - 1
	for (i = l / 2; i < l ; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**void puts_half(char *str)
{
	int len, n, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len % 2)
	{
		for (n = (len - 1) / 2; n < len - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
