#include<stdio.h>
#include <ctype.h>
#include "main.h"

/**
*_islower - determines whether the letter is in lower case
*
*Return:Always 0(success)
*/
int main(void)
{
	if (_islower('c') > 0)
		return (1);
	return (0);
}
