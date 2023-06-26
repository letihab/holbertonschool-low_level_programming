# include "main.h"

/**
 *_strlen - function that return the length of a string
 *@s: parameter of function
 *return 0.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
