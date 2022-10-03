#include "main.h"
#include <string.h>
/**
*_strpbrk - function that returns number of characters that match
*@s: string to be scanned
*@accept: string containing character to be matched
*Return:  success
*/
char *_strpbrk(char *s, char *accept)
{
	if (strpbrk(s, accept) != 0)
		return (strpbrk(s, accept));
	return (NULL);
}
