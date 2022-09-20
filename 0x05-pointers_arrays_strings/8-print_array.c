#include "main.h"
#include <stdio.h>
/**
 * print_array - print each elements of array
 * @n:number of elements
 * @a:parameter
 * Return: void
 */
void print_array(int *a, int n)
{
	int k = 0;

	while (k < n)
	{
		if (k < n - 1)
		{
		printf("%d, ", a[k]);
		}
		else
		{
			printf("%d", a[k]);
		}
		k++;
	}
	printf("\n");
}
