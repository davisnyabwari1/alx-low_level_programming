#include "main.h"
#include <string.h>
/**
*_strchr - function that finds the first occurence of a letter
*@s: string to be searched
*@c: character to be found
*Return:  success
*/
char *_strchr(char *s, char c)
{
	if (strchr(s,c) != NULL)
		return strchr(s,c);
	return (NULL);
}
