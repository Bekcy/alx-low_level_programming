#include "main.h"
/**
*times_table->prints the 9 times table, starting with 0
*/
void times_table(void)
{
int i, j;
int n = 9;
_putchar("%4c|", ' ');
for (i = 0; i <= n; i++)
{
_putchar("%4d|", i);
}
_putchar("\n");
for (i = 0; i <= n; i++)
{
_putchar("%4d|", i);
for (j = 0; j <= n; j++)
{
_putchar("%4d", i*j);
}
_putchar("\n");
}
}
