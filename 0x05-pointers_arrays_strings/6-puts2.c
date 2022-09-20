#include "main.h"
#include <string.h>

/**
*puts2 - finds length of a string
*@s:string passed
*Return: success
*/
void puts2(char *s)
{
int length, i;
char ch;
length = strlen(s);

for (i = 0; i <= length - 1; i++)
{
if (i % 2 == 0)
{
ch = s[i];
_putchar(ch);
}
}
_putchar('\n');
}
