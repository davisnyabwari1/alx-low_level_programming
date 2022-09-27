#include "main.h"
#include <string.h>
/**
*_memcpy - function that copies memory from one location to another
*@dest: destination memory
*@src: source
*@n: number of bytes to be filled
*Return:  something
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(*dest, *src, sizeof(*src));
	return (dest);
}
