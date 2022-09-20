#include "main.h"
#include <string.h>

/**
*rev_string - finds reverse of a string
*@s:string passed
*Return: success
*/
void rev_string(char *s)
{
int length, i;
char ch;
length = strlen(s);

for (i = 0; i < length / 2; i++)
{
ch = s[i];
s[i] = s[length - 1 - i];
s[length - 1 - i] = ch;

}
_putchar('\n');
}
