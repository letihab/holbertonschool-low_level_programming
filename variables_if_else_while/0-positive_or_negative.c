#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - Entry point
 *
 *Description: return the value of the random number
 *
 *Return: Always 0 (success)
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
printf("%d \n", n);
if (n > 0)
{
printf("is positive \n", n);
}
else if (n < 0)
{
printf("is negative \n", n);
}
else
{
printf("is zero \n", n);
}
return (0);
}

