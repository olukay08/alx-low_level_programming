#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator:string arg
 * @n:Number of args to be passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *mystring;
	va_list ap;

	if (n < 1)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		if ((separator != NULL) && (i < n - 1))
		{
			mystring = va_arg(ap, char *);
			if (mystring == NULL)
			{
				mystring = "nil";
			}
			printf("%s%s", mystring, separator);
		}
		else
		{
			mystring = va_arg(ap, char *);
			if (mystring == NULL)
				mystring = "nil";
			printf("%s", mystring);
		}
	}
	printf("\n");
	va_end(ap);
}


