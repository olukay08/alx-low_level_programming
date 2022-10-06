#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of intgers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to array of integers
 */
int *array_range(int min, int max)
{
	int i, diff, n;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	diff = max - min + 1;
	array = malloc(sizeof(int) * diff);
	if (array == NULL)
	{
		return (NULL);
	}
	n = min;
	for (i = 0; i < diff; i++)
	{
		array[i] = n;
		n++;
	}
	return (array);
}
