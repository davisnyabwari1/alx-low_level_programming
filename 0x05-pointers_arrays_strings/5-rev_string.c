#include "main.h"
#include <string.h>

/**
*rev_string - finds reverse of a string
*@s:string passed
*Return: success
*/
void print_rev(char *s)
{
int length, i;
char ch;
length = strlen(s);

for (i = 0; i < length/2; i++)
{
ch = s[i];
s[i] = s[l-1-1];
s[l-1-1] = ch;

_putchar(s);
}
_putchar('\n');
}
