#include <stdio.h>
/**
 * main - print fibonacci series
 * Return: 0
 */
int main(void)
{
	int n = 98;
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int r;
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i < 98)
		{

		printf("%lu, ", a);
		}
		else
		{
			printf("%lu", a);
		}
		r = a + b;
		a = b;
		b = r;
	}
	printf("\n");
	return (0);
}
