#include <stdio.h>
/**
 * print two two digits combinations
 * Return: always 0 (success)
 */
int main(void)
{
	int i,k;
	for (i = 0 ; i < 99 ; i++)
	{

		for (k = 1; k < 100 ; k++)
		{
			
	
		putchar(i/10 + '0');
		putchar(i%10 + '0');
		putchar(' ');
		putchar(k/10 + '0');
		putchar(k%10 + '0');
		if (i !=98 ||  k !=99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	
	}
	putchar('\n');
	return (0);
}
