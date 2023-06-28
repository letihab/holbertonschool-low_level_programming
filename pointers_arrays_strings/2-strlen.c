# include "main.h"

/**
 *_strlen - function that return the length of a string
 *@s: parameter of function
 *Return: the length of a string.
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
