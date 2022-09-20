#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
*_atoi - converts a string to an integet 
*@s: string to be passed
*Return: success
*/
int _atoi(char *s)
{
 int val;
 val = atoi(s);
 printf("%d", val);
return (0);
}
