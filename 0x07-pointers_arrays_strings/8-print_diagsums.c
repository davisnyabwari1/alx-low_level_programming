#include "main.h"
/**
*print_diagsums - prints the sum of diagonals
*@a: the array
*@size: size of an array
*/
void print_diagsums(int *a, int size)
{
	int sum = 0, i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size, j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}
}

