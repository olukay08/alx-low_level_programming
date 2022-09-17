#include <stdio.h>
/**
 * main - print fibonacci series
 * Return: 0
 */
int main(void)
{
	int n = 98;
	long int a = 0;
	long int b = 1;
	long int r;
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i < 98)
		{

		printf("%ld, ", a);
		}
		else
		{
			printf("%ld", a);
		}
		r = a + b;
		a = b;
		b = r;
	}
	printf("\n");
	return (0);
}
