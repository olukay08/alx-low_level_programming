#include "main.h"
/**
 * print_last_digit - print last digit of a number
 * @n: the number in questio
 *Return:Always 0
 */
int print_last_digit(int n)
{
	int k = n % 10;

	if (k < 0)
	{
		k *= -1;
	}
		_putchar(k + '0');
		return (k);
	return (0);
}
