#include <stdio.h>
#include <math.h>
/**
 *main - to print largets prime factor of a 575767565
 * Return: 0
 */
int main(void)
{
	int i, m = -1;

	long n = 612852475143;

	while (n % 2 == 0)
	{
		m = 2;
		n = n / 2;
	}
	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			m = i;
			n = n / i;
		}
	}
	
	return (m);
	printf("\n");
	return (0);
}
