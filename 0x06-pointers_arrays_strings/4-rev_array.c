#include "main.h"
#include <string.h>

/**
*reverse_array - reverses an array
*@a: array
*@n: number of elements
*Return: success
*/
void reverse_array(int *a, int n)
{
int i;

for (i = n - 1; i > 0; i--)
{
printf("%d", a[i]);
if (i == 0)
{
continue
}
else
{
printf(", ")
}
}
printf("\n");
}
