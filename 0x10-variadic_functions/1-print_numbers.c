#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - -prints numbers, followed by a new line
 * @separator:string
 * @n:Number of args
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	int k;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if ((separator != NULL) && (i < n - 1))
		{
			k = va_arg(ap, int);
			printf("%d%s", k, separator);
		}
		else
		{
			k = va_arg(ap, int);
			printf("%d", k);
		}
	}
	printf("\n");
}
