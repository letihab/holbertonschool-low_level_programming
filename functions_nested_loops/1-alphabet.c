#include "main.h"
/**
 * main - Prints _putchar.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	print_alphabet();
	char i;
	for (i = 'a'; i >= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
