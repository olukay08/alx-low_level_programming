#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * print_rev - it prints the reverse of a string varianle
 * Return:0
 */
void print_rev(char *s)
{
	int l = strlen(s);

	while (l--)
		putchar(*(s + l));
	putchar(10);
}
