#include "main.h"
/**
*set_string - sets a value of a pointer to a character
*@s: double pointer
*@to: single pointer
*/
void set_string(char **s, char *to)
{
	char name = 'D';

	to = &name;
	s = &to;
}
