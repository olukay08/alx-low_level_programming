#include "main.h"
/**
 * print_sign -function to check for the sign of a number
 * @n: is the int that wil use for the argument of the function
 * Return:Always 1 for print_sign 1 print sign -1 for print_sign and 0 for zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	if (n == 0)
	{
		_putchar(48);
		return (0);
	}
return (0);
}
