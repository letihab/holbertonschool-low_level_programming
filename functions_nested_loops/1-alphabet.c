#include "1-main.c"
/**
 * main - Prints _putchar.
 *
 * Return: Always 0.
 */
void print_alphabet(void);
{
	char i;
	for (i = 'a'; i >= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
