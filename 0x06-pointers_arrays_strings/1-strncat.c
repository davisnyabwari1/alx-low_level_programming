#include "main.h"
#include <string.h>

/**
*_strncat - concatenates two strings
*@dest: destination string
*@src: source string
*@n: number of strings
*Return: success
*/

char *_strncat(char *dest, char *src, int n)
{
dest = strncat(dest, src, n);

return (dest);
}

