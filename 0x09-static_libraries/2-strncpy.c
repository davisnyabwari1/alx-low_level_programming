#include "main.h"
#include <string.h>

/**
*_strncpy - concatenates two strings
*@dest: destination string
*@src: source string
*@n: number of strings
*Return: success
*/

char *_strncpy(char *dest, char *src, int n)
{
dest = strncpy(dest, src, n);

return (dest);
}

