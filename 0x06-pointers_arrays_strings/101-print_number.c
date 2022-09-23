#include "main.h"
/**
 * print_number - print integer
 * @n:parameter
 * Return: nothin
 */
void print_number(int n)
{	
       	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if ((num / 10) > 0)
	
		print_number(num / 10);

	_putchar((num % 10) +'0');
}
