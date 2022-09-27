#include "main.h"
/**
*print_diagsums - prints the sum of diagonals
*@a: the array
*@size: size of an array
*/
void print_diagsums(int *a, int size)
{
	int sum = 0, i, j, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}

	for (int m = size; m >= 0; m--)
	{
		for (int n = size; n >= 0; n--)
		{
			if (m == n)
				sum2 += a[m][n];
		}
	}
	printf("%d, %d", sum, sum2);
}

