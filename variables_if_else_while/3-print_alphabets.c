#include <stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
char alph;
for (alph = 'a'; alph <= 'z'; alph++)
{
putchar('alpha');
}
for (alph = 'A'; alph <= 'Z'; alph++)
{
putchar('alph');
}
putchar('\n');
return (0);
}
