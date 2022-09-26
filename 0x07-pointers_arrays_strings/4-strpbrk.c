#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strpbrk -a function that searches a string for any of a set of bytes
 * @s:para 1
 * @accept:para 2
 * Return:int chars
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
