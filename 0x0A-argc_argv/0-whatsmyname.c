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
	printf("%s\n", argv[argc - 1]);
	return (0);
}
