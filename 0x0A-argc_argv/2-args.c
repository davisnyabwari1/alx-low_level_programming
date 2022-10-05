#include "main.h"
#include <stdlib.h>

/**
*main - this the entry point of the function
*@argc: argument count variable
*@argv: string passed in contained here
*Return: success
*/

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
