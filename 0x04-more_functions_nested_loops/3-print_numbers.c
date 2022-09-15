#include "main.h"
/**
 * print_numbers - To print numbers from 0 to 9
 * Return:Always 0 for success
 */
void print_numbers(void)
{
	int k;

	for (k = 0 ; k < 10 ; k++)
	{
		_putchar(k + '0');
	}
	_putchar('\n');
}
