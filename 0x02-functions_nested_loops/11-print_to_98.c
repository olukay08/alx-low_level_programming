#include "main.h"
/**
 * print_to_98 - print  numbers until is last number is 98;
 * Return: Always 0 (success);
 */
void print_to_98(int n)
{
	while (n < 99 )
	{
		_Putchar(n + '0');
		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;

	}
	while (n >= 98)
	{
		_putchar(n + '0');
		if (n != 98)
		{
		_putchar(',');
		_putchar(' ');
		}
		n--;
	}
}


