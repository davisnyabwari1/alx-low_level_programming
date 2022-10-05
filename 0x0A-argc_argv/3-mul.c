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
	int result;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
