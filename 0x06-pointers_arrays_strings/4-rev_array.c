#include <stdio.h>
#include "main.h"
/**
 * reverse_array - function to reverse an array elements
 * @n:parameter
 * @a:parameter
 * Return:void
 */
void reverse_array(int *a, int n)
{
	int i = n;

	while (i >= 0)
	{
		if (i > 0)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		i--;
	}
}
