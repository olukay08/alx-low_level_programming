#include "main.h"
/**
 * is_prime_number -print prime numbers
 * @n:par 1
 * Return:0
 */
int is_prime_number(int n)
{
	int s = n / 2;
	if (n <= 1)
		return (0);
	return (is_prime(n, s));
}
/**
 * is_prime - osee
 * @n:para
 * @s:para 2
 * Return: 1
 */
int is_prime(int n, int s)
{
	if (s <= 1)
		return (1);
	else if (n % s == 0)
		return (0);
	return (is_prime(n, s - 1));
}
