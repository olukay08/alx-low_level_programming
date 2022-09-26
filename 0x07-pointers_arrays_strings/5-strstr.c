#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * *_strstr - a function that locates a substring
 * @haystack:para 1
 * @needle:parameter 2
 * Return:chars
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
