#include <stdio.h>
#include "main.h"
/**
 * print_triangle - print triangle structure
 * @size:parameter
 * Return: 0
 */
void print_triangle(int size)
{
	int l, k;

	if (size > 0)
	{
		for (l = 1; l <= size ; l++)
		{
			for (k = (size - l) ; k > 0 ; k--)
			{
				putchar(' ');
			}
			for (k = 0 ; k < l ; k++)
			{
				putchar('#');
			}

			if (l == size)
			{
				continue;
			}
			putchar('\n');
		}

	}
}
