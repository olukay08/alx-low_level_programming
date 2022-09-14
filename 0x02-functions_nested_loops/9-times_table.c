#include "main.h"
/**
 * times_table - prints the 9 times other numbers starint from 0
 * Return :Always 0;
 */
void times_table(void)
{
	int i, k, pr;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (k = 0 ; k <= 9 ; k++)
		{
			pr = i * k ;
			_putchar(pr + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
