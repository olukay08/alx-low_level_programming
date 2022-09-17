#include <stdio.h>
/**
 * main - print fibonacci series
 * Return: 0
 */
int main(void)
{
	int n = 98;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int r;
	int i;

	for (i = 1; i <= n; i++)
	{
		if (i < 98)
		{

		printf("%zu, ", a);
		}
		else
		{
			printf("%zu", a);
		}
		r = a + b;
		a = b;
		b = r;
	}
	printf("\n");
	return (0);
}
