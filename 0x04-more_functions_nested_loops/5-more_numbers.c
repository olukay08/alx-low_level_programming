#include "main.h"
/**
 * more_numbers - print numbers from 1 to 14 follow by newline
 * Return:0
 */
void more_numbers(void)
{
	int k;

	int m = 0;

	while (m < 10)
	{
		for (k = 0; k < 15 ; k++)
		{
			if(k > 9)
			{
			_putchar((k /10) + '0');
			}
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
		m++;
	}
	

}
