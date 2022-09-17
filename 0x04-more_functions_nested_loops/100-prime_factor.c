#include <stdio.h>
#include <math.h>
/**
 * prime_factor - to print largets prime factor of a 575767565
 * @n:parameter
 * Return: 0
 */
int prime_factor(int n)
{
	int i, m = -1;

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
	if (n > 2)
	{
		m = n;
	}
	return (m);
	printf("\n");
}
