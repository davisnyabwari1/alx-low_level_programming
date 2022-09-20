#include "main.h"
#include <string.h>

/**
*puts_half - print half of string
*@str:string passed
*Return: success
*/
void puts_half(char *str)
{
int length, i;
char ch;
length = strlen(str);

for (i = (length) - 1 / 2; i <= length - 1; i++)
{
ch = str[i];
_putchar(ch);
}
_putchar('\n');
}
