#include "main.h"
/**
*reverse_array->reversing an array
*@a:array a
*@n:an element of an array
*/
void reverse_array(int *a, int n)
{
int x, y;

for (y = n - 1 ; y > n / 2; y--)
{
x = a[n - 1 - y];
a[y] = a[n - 1 - y];
a[y] = x;
}
}
