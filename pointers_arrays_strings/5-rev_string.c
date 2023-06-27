# include "main.h"
# include "2-strlen.c"

/**
 *rev_string - function that prints a string,in reverse
 *@s: parameter of function
 *return 0.
 */
void rev_string(char *s)
{
	int i, j, k;
	j = _strlen(s);

	for (i = 0; i < j/2; i++)
	{
		k = s[i];
		s[i] = s[j-i-1];
		s[j-i-1] = k;
	}
}
