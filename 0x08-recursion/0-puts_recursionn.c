#include <stdio.h>
#include "main.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n') ;
	}
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
