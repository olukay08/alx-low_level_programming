#include <stdio.h>
/**
 * main - function to print 2 digits number
 * Return:Always o (success)
 */
int main(void)
{
	int p;

	int y;

			for (p = 0; p < 9 ; p++)
	{
			for (y = 1; y < 10 ; y++)
	{
			if (y != p && y > p)
				{
			putchar(p + '0');
			putchar(y + '0');
			if (p < 8)
			{
			putchar(',');
			putchar(' ');
			}
				}

		}
	}
			putchar('\n');
	return (0);
}

