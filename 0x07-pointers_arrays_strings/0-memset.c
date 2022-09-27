#include "main.h"
#include <string.h>
/**
*_memset - function that sets a constant byte
*@s: starting address of memory to be filled
*@b: charcter to be filled
*@n: number of bytes to be filled
*Return:  success
*/
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n * sizeof(*s));
	return (s);
}
