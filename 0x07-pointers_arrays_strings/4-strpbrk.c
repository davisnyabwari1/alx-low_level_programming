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
	char *ret = strpbrk(s, accept);

	if (ret)
		return (*ret);
	return (NULL);
}
