#include "main.h"
#include <string.h>

/**
*puts_half - print half of string
*@str:string passed
*Return: success
*/
void puts_half(char *str)
{
int length, i, l;
char ch;
length = strlen(str);
if (length % 2 == 0)
{
l = length / 2;
}
else
{
l = (length + 1) / 2;
}

for (i = l; i <= length - 1; i++)
{
ch = str[i];
_putchar(ch);
}
_putchar('\n');
}
