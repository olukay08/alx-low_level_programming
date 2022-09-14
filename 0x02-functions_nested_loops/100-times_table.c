#include "main.h"
/**
 * print_times_table - 
 * Return:Always o succes
 */
void print_times_table(int n)
{	
	int j, pr;
	if (n < 16 && n >= 0 ) 
	{
		for (j = 0 ; j <= n; j++)
		{
			pr = j * n;
			_putchar(pr + '0');
			if (j != n-1)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
