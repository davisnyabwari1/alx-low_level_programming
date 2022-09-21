#include "main.h"
#include <string.h>
/**
*
*_strcat - concatenates two strings
*@dest: destination string
*@src: source string
*Return: success
*/

char *_strcat(char *dest, char *src)
{
dest = strcat(dest,src);
return (dest);
}

