#include <stdlib.h>
#include <time.h>                                               
#include <stdio.h>
/**                                               
*main ->assign a random number to the variable n each time executed                                                               
*and prints the number stored in the variable n
*Return: always 0                                         
*/
int main(void)
{
int ch;
for (ch = 48; ch <= 57; ch++)
{
putchar(ch);
if (ch != 57)
{
putchar(44);
putchar(32);
}
}
putchar(10);
return (0);
}
