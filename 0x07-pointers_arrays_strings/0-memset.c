#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * *_memset - function that fills memory with a constant byte
 * @s:parameter 1
 * @b:parameter 2
 * @n: interger bytes 
 * Return:chars
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s,b,n));
}
			
