#include "main.h"
#include <string.h>
/**
*_strspn - function that returns number of characters that match
*@s: string to be scanned
*@accept: string containing character to be matched
*Return:  success
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
