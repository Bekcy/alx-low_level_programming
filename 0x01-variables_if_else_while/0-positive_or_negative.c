#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main -> assign random number to the variable n each time executed and prints
* based on a condition
* Return: always 0
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
printf("%d is positive\n", n);
if (n == 0)
printf("%d is zero\n", n);
if (n < 0)
printf("%d is negative\n", n);
return (0);
}
/**
*main->test functio
*Return:0
*/
int main(void)
{
	int i;
	i = 0;
	positive_or_negative(i);
}
