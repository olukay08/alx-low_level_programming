#include <stdio.h>
#include "main.h"
/**
 * _sqrt_recursion - sqaure of numbers
 * @n:para 1
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n == 1 || n == 0)
		return (n);
	return (_sqrt(0, n));
}
/**
 * _sqrt - square root of a number
 * @n:para 1
 * @x:para 2
 * Return:0
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);
	return (_sqrt(n + 1, x));
}
