#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print  numbers until is last number is 98;
 * Return: Always 0 (success);
 * @n:argument for th function
 */
void print_to_98(int n)
{
	if (n < 99)
	{
		while (n <= 98)
		{

		printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n++;
	}

	}
		else
{
while (n >= 98)
{
printf("%d", n);
		if (n != 98)
		{
			printf(", ");
		}
		n--;
	}
	}
	printf("\n");
}



