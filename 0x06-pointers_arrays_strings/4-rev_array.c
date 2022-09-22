#include "main.h"
#include <string.h>

/**
*reverse_string - finds reverse of a string
*@a:array passed
*@n:number
*Return: success
*/
void reverse_array(int *a, int n);
{
int i;
char ch;

for (i = n - 1; i >= n / 2; i--)
{
ch = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = ch;

}
}
