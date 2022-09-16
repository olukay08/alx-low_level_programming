#include "main.h"
/**
 * ade - function to print numbers from 10 to 14;
 * Return:0
 */
void ade(void)
{
	int b;

	for (b = 10; b < 15 ; b++)
	{
		_putchar(b / 10 + '0');
		_putchar(b % 10 + '0');

	}

}
