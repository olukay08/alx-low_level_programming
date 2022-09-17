#include <stdio.h>
#include "main.h"
/**
 * print_number - print numbers
 * @n:The int argument
 * Return: 0
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
	putchar('-');
	num = -num;
	}
	if (n > 0)
	{
		print_number(num / 10);
	}

		putchar(num % 10 + '0');

}
