#include <stdio.h>
/**
 * main - Print out 3 digit number combinations
 * Return: Always 0 (success)
 */
int main(void)
{

	int k;

	int n;

	int y;

	for (k = 0 ; k < 8 ; k++)
	{
		for (n = 1; n < 9 ; n++)
		{
			if (n != k && n > k)
			{
				for (y = 2 ; y < 10 ; y++)
				{
					if (y > n && y != n)
					{
					putchar(k + '0');
					putchar(n + '0');
					putchar(y + '0');
					if (k < 7)
					{
						putchar(',');
						putchar(' ');
					}
					}
				}

			}
		}
	}
	putchar('\n');
	return (0);
}

