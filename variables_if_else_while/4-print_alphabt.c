#include <stdio.h>
/**
 * main - Prints the alphabetic in lower and upper case
 *
 * Return: Always (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
if (i != 'e'  && i != 'q')
putchar(i);
}
putchar('\n');
return (0);
} 
