#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - function to print sum of diagonals of square matrix
 * @a;pra 1
 * @size:para 2
 * Return:void
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int sumf = 0;
	int sums = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sumf += a[i][j];
			}
			if ((i + j) == (size - 1))
			{
				sums += a[i][j];
			}
		}
	}
	printf("%d, %d", sumf sums);
}
