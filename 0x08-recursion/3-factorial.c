#include "main.h"
#include <stdio.h>
/**
 * factorial - prints the factorial of a number
 * @n:para 1
 * Return:0 for succes and -1 for error
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
