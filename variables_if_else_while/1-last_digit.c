#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Entry point
 *Description: return the value of the last digit of random number
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;
if (n > 5)
{
printf("lastd %d and is greater than 5 \n", n, lastd);
}
else if (lastd < 6 && lastd != 0)
{
printf("lastd %d and is 0 \n", n, lastd);
}
else if (lastd == 0)
{
printf("last digit of %d is %d and is 0\n", n, lastd);
}
return (0);
}
