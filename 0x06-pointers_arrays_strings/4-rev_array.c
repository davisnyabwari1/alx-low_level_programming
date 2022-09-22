#include "main.h"
#include <string.h>

/**
*rev_array - reverses an array
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
for (i = n; i > 0; i--)
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
