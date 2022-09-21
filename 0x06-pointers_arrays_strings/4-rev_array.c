#include "main.h"
#include <string.h>

/**
*rev_array - finds reverse of a string
*@s:array
*@n: number of elements
*Return: success
*/
void reverse_array(int *a, int n)
{
int i;
char ch;

for (i = 0; i < n / 2; i++)
{
ch = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = ch;

}
}
