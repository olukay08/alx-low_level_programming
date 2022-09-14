#include "main.h"
/**
 * Print_last_digit - function to print last digit of a number
 * @n: the number in questio
 *Return:Always 
 */
int print_last_digit(int n)
{
	int k = n % 10;

	if (k < 0)
	{
		k *= -1;
		_putchar(k + '0');
		return (k);
	}
	return (0);
}
