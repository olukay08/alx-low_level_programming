#include <string.h>
#include <stdio.h>
#include "main.h"
/**
 * rev_string -print string in reverse
 * @s:parameter
 * REturn:0
 */
void rev_string(char *s)
{
	int i = 0;

	while (s[i] <= '\0')
	{	
		putchar(s[i]);
		i++

	}
}
