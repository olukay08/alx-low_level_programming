#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	int g;

	for (g = 0 ; g < 10 ; g++)
	{
		putchar(g + '0');
	 if (g <= 8)
		{		 
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
