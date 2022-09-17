#include <stdio.h>
/**
 * main- print multiples of 3 and 5 below 1024
 * Return:0
 */
int main(void)
{
	int sum = 0;
	int i;
	int n = 1023;

	for (i = 0; i <= n ; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			{
			sum += i;
			}


	}
	printf("%d\n", sum);
	return (0);
}
