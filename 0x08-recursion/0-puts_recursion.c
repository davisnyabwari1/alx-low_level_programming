#include "main.h"
/**
*_puts_recursion -prints a string using recursion
*@s: string to be printed
*/
void _puts_recursion(char *s)
{
	if (s !='\0')
		puts(s);
		_puts_recursion(s + 1);
	return;

}
