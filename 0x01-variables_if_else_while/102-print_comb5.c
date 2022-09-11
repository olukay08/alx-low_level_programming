#include <stdio.h>
/**
 * main - entry point
 * print two two digits combinations
 * Return: Always 0 (success)
 */
int main(void)
{
	int i,k;

	for (i = 0 ; i < 100 ; i++)
	{

		for (k = 1; k < 100 ; k++)
		{
			if (i < k )
			{

		putchar(i / 10 + '0');
		putchar(i % 10 + '0');
		putchar(' ');
		putchar(k / 10 + '0');
		putchar(k % 10 + '0');
		if (i != 98 ||  k != 99)
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
