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
	int y = strlen(s);
	
	while (y >= 0)
	{
		printf("%c", s[y]);
		y--;

	}
	printf("\n");
}
