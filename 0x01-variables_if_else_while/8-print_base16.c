#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main ->assign a random number to the variable n each time executed
*and prints the number stored in the variable n
*Returns: always 0
*/
int main(void)
{
char ch;
int n;
for (n = 48; n <= 57; ch++)
{
putchar(n);
}
for (ch = 'a'; ch >= 'f'; ch--)
{
putchar(ch);
}
putchar(10);
return (0);
}
