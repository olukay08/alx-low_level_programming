#include <stdio.h>
/**
 * main- print fibonacci numbers
 * Return:0
 * */
int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int r = 0;
	int i;

	for (i = 0; i < 50 ; i++)
	{
		if (i < 49)
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
