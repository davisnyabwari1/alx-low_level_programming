#include "main.h"
#include <string.h>

/**
*print_array - prints an array
*@a: array
*@n: number of elements
*Return: success
*/
void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i == n - 1)
{
continue;
}
else
{
printf(", ");
}
}
printf("\n");
}
