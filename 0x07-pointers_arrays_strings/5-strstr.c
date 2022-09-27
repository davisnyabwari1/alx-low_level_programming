#include "main.h"
#include <string.h>
/**
*_strstr - function that finds the occurrence of a substring
*@haystack: string to be scanned
*@needle: string containing character to be matched
*Return:  success
*/
char *_strstr(char *haystack, char *needle)
{
	if (strstr(haystack, needle) != NULL)
		return (strstr(haystack, needle));
	return (NULL);
}
