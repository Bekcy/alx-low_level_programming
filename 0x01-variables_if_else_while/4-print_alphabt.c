#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main ->assign random number to the variable n each time executed
*and prints based on a condition
*Return: always 0
*/
int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
}
putchar(10);
return (0);
}
