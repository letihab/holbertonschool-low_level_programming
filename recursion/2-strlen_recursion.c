#include "main.h"

/**
 *_strlen_recursion - function that returns the length of a string
 *@s: parameter of a function
 *Return: always 0.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		_strlen_recursion(s + 1);
		_putchar(*s);
	}
}
