#include "main.h"
/**
*print_last_digit->prints the last digit
*@n:the passed args
*Return:the last digit
*/
int print_last_digit(int)
{
int ln = n % 10;
if (n < 0)
ln = ln* - 1;
_putchar(ln + '0');
return (ln);
}
