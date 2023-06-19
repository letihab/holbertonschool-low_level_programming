#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main - print random number if is negative positive or zero
 *
 *Return is positive if the number is >0
 *Return is zero if the number equal 0
 *Return is negative if the number <0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("the number is positive \n");
}
if else(n < 0)
{
printf("the number is negative \n");
}
else
{
return (0);
}
}
