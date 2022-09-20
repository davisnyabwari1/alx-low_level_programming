#include "main.h"
#include <string.h>

/**
*print_rev - finds length of a string
*@s:string passed
*Return: success
*/
void print_rev(char *s)
{
int length, i;
char ch;
length = strlen(s);

for (i = length; i > 0; i--)
{
ch = s[i];

}
_putchar(ch);
}
