#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strncpy - - copy from sring source to a specific dest
 * @dest:parameter 1
 * @src:parameter 2
 * @n:integer
 * Return:char
 */
char *_strncpy(char *dest, char *src, int n)
{
	return (strncpy(dest, src, n));
}
