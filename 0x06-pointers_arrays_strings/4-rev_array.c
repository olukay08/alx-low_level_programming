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
	int t;
	int i;

	for (i = 0; i < n / 2 ; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = t;
	}
}
