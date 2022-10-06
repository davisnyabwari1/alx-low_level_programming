#include "main.h"
#include <stdlib.h>

/**
*malloc_checked -function that allocates memory
*@b: value to be stored
*/

void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = (unsigned int *) malloc(b * sizeof(unsigned int));

	if (ptr == NULL)
	{
		putchar(9 + '0');
		putchar(8 + '0');
	}
	else
	{
		return (ptr);
	}

	free(ptr);
}
