# include "main.h"
# include "2-strlen.c"

/**
 *rev_string - function that prints a string,in reverse
 *@s: parameter of function
 *return 0.
 */
void rev_string(char *s)
{
	int i = _strlen(s) -1;
	int c;
	for (; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	return (0);
}
