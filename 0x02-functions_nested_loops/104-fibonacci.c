#include <stdio.h>
/**
 * main - print fibonacci series
 * Return: 0
 */
int main(void)
{
	int n = 98;
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long r;
	int i;

	for (i = 0; i <= n; i++)
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
