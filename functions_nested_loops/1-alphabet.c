#include "main.h"

/**
 * main - Print alphabet in lower case followed by a new line
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
